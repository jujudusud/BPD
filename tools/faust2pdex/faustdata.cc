#include "faustdata.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonValue>

FaustData FaustData::loadJson(const QString &filebase, const QJsonDocument &doc)
{
    FaustData f;

    QJsonObject root = doc.object();
    f.filename = filebase;

    for (QJsonValue vMeta : root["meta"].toArray()) {
        QJsonObject oMeta = vMeta.toObject();
        auto pos = oMeta.find("id");
        if (pos != oMeta.end())
            f.id = pos->toString();
    }
    if (f.id.isEmpty())
        f.id = filebase;

    f.inputs = root["inputs"].toString().toUInt();
    f.outputs = root["outputs"].toString().toUInt();

    QJsonArray ui = root["ui"].toArray();
    for (unsigned i = 0; i < (unsigned)ui.size(); ++i) {
        QJsonObject o = ui[i].toObject();

        QJsonValue vItems = o["items"];
        if (vItems.isArray()) {
            QJsonArray aItems = vItems.toArray();
            for (unsigned i = 0; i < (unsigned)aItems.size(); ++i)
                ui.append(aItems[i]);
            continue;
        }

        QString type = o["type"].toString();
        Control ctl;
        if (type == "hslider" || type == "vslider" || type == "nentry") {
            ctl.type = Control::Number;
            ctl.init = o["init"].toString().toDouble();
            ctl.min = o["min"].toString().toDouble();
            ctl.max = o["max"].toString().toDouble();
            ctl.step = o["step"].toString().toDouble();
            ctl.label = o["label"].toString();
            f.controls.push_back(ctl);
        }
        else if (type == "checkbox" || type == "button") {
            ctl.type = Control::Boolean;
            ctl.init = o["init"].toString().toDouble();
            ctl.min = 0;
            ctl.max = 1;
            ctl.step = 1;
            ctl.label = o["label"].toString();
            f.controls.push_back(ctl);
        }
    }

    return f;
}
