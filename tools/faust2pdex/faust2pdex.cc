#include "faust2pdex.h"
#include "faustdata.h"
#include "main_window.h"
#include <QMessageBox>
#include <QJsonDocument>
#include <QProcess>
#include <QFile>
#include <QFileInfo>

struct Application::Impl {
    MainWindow *win_;
};

Application::Application(int &argc, char *argv[])
    : QApplication(argc, argv), P(new Impl)
{
    MainWindow *win = P->win_ = new MainWindow;
    win->setWindowTitle(applicationName());
    win->show();
}

Application::~Application()
{
}

void Application::loadFaustFile(const QString &filename)
{
    int exitcode = QProcess::execute("faust", {"-json", filename});
    if (exitcode != 0) {
        QMessageBox::warning(nullptr, tr("Error"), "Could not load Faust file.");
        return;
    }

    QFile file(filename + ".json");
    file.open(QIODevice::ReadOnly);
    QJsonDocument doc = QJsonDocument::fromJson(file.readAll());
    file.close();
    file.remove();

    if (doc.isNull()) {
        QMessageBox::warning(nullptr, tr("Error"), "Could not read JSON data.");
        return;
    }

    QString filebase = QFileInfo(filename).baseName();
    FaustData data = FaustData::loadJson(filebase, doc);
    P->win_->loadFaustData(data);
}

int main(int argc, char *argv[])
{
    Application app(argc, argv);
    QStringList args = app.arguments();
    switch (args.size()) {
    case 2:
        app.loadFaustFile(args[1]);
        break;
    case 1:
        break;
    default:
        return 1;
    }
    int ret = app.exec();
    return ret;
}
