#include "pddata.h"
#include "faustdata.h"
#include "faust2pdex.h"
#include <QTextStream>
#include <QResource>
#include <QFile>
#include <QDebug>

QString PdData::generateExternal() const
{
    QString code;
    QTextStream os(&code);

    const FaustData &f = *faustdata;
    bool mainsignalin = this->mainsignalin && !inputs.empty();

    os << "//------------------------------------------------------------------------------\n"
        "// Pd class `" << classname << "` generated by " << theApp->applicationName()  <<  "\n"
        "//------------------------------------------------------------------------------\n"
        "\n";

    os << "//------------------------------------------------------------------------------\n"
        "// User settings\n"
        "//------------------------------------------------------------------------------\n"
        "\n"
        "// !! set the relative location of faust code output !!\n"
        "#define DSP_CC_FILENAME \"./dsp/" << f.filename << ".cc\"\n"
        "\n";

    os << "//------------------------------------------------------------------------------\n"
        "// Static definitions from generator\n"
        "//------------------------------------------------------------------------------\n"
        "#define DSP_CLASS_NAME " << toCString(classname) << "\n"
        "#define DSP_SETUP " << setupFunctionName() << "\n"
        "#define DSP_MAINSIGNALIN " << (int)mainsignalin << "\n"
        "#define DSP_NUM_CONTROLS " << controls.size() << "\n"
        "#define DSP_NUM_INPUTS " << f.inputs << "\n"
        "#define DSP_NUM_OUTPUTS " << f.outputs << "\n";

    os << "#define DSP_CONTROLS(F)";
    for (unsigned i = 0, n = controls.size(); i < n; ++i) {
        const PdData::Control &ctl = controls[i];
        const FaustData::Control fctl = f.controls[ctl.faustindex];
        os << " \\\n    F(" << toCString(ctl.symbol)
           << ", " << toIdentifier(ctl.symbol)
           << ", " << toCString(fctl.label)
           << ", " << (ctl.hasinlet ? "true" : "false")
           << ", " << (ctl.haslimit ? "true" : "false")
           << ", " << ctl.initarg
           << ", " << fctl.min << ", " << fctl.max
           << ")";
    }
    os << "\n";

    os << "//------------------------------------------------------------------------------\n"
        "\n"
        "//------------------------------------------------------------------------------\n"
        "// Static implementation code\n"
        "//------------------------------------------------------------------------------\n";

    QFile staticCodeFile(":/template/pdex.cc");
    staticCodeFile.open(QFile::ReadOnly);
    os << QString::fromUtf8(staticCodeFile.readAll());

    os.flush();
    return code;
}

static bool isIdentifierChar(unsigned c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
            (c >= '0' && c <= '9') || c == '_');
}

QString PdData::setupFunctionName() const
{
    QByteArray class8 = classname.toUtf8();

    QString result;

    bool tilde = !class8.isEmpty() && class8.back() == '~';
    if (tilde)
        class8.resize(class8.size() - 1);

    for (unsigned char c : class8) {
        if (isIdentifierChar(c))
            result.push_back(c);
        else {
            result.append("0x");
            char digit[] = "0123456789abcdef";
            result.push_back(digit[(c & 0xf0) >> 4]);
            result.push_back(digit[(c & 0x0f)]);
        }
    }

    if (tilde)
        result.append("_tilde");
    result.append("_setup");

    return result;
}

QString PdData::toIdentifier(const QString &name)
{
    bool acceptedChar = true;
    QString sym;

    for (uint c : name.toUcs4()) {
        bool acceptedLast = acceptedChar;
        acceptedChar = isIdentifierChar(c);
        if (!acceptedChar) {
            if (acceptedLast)
                sym.push_back('_');
        }
        else
            sym.append(QString::fromUcs4(&c, 1));
    }

    return sym;
}

QString PdData::toCString(const QString &text)
{
    QString result;
    result.push_back("\"");

    for (uint c : text.toUcs4()) {
        switch (c) {
        case '\a':
            result.append("\\\a"); break;
        case '\b':
            result.append("\\\b"); break;
        case '\t':
            result.append("\\\t"); break;
        case '\n':
            result.append("\\\n"); break;
        case '\v':
            result.append("\\\v"); break;
        case '\f':
            result.append("\\\f"); break;
        case '\r':
            result.append("\\\r"); break;
        case '\\':
        case '"':
            result.push_back('\\');
            result.push_back(c);
            break;
        default:
            if (c < 128)
                result.push_back(c);
            else {
                QByteArray utf8 = QString::fromUcs4(&c, 1).toUtf8();
                for (unsigned char c : utf8) {
                    result.append("\\x");
                    char digit[] = "0123456789abcdef";
                    result.push_back(digit[(c & 0xf0) >> 4]);
                    result.push_back(digit[(c & 0x0f)]);
                }
            }
        }
    }

    result.push_back('"');

    return result;
}
