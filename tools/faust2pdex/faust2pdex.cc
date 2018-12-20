//          Copyright Jean Pierre Cimalando 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include "faust2pdex.h"
#include "faustdata.h"
#include "main_window.h"
#include <QMessageBox>
#include <QJsonDocument>
#include <QProcess>
#include <QDir>
#include <QFile>
#include <QFileInfo>
#include <QStandardPaths>
#include <QDebug>

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
    QFileInfo fileinfo(filename);

    QDir tempDir(QStandardPaths::writableLocation(QStandardPaths::TempLocation) +
        "/" + theApp->applicationName() + "/" + QString::number(theApp->applicationPid()));
    tempDir.mkpath(".");

    QString dspfile = tempDir.filePath(fileinfo.fileName());
    if (!QFile(filename).copy(dspfile)) {
        QMessageBox::warning(nullptr, tr("Error"), "Could not write temporary file.");
        tempDir.removeRecursively();
        return;
    }

    int exitcode = QProcess::execute("faust", {"-json", "-I", fileinfo.dir().path(), dspfile});
    if (exitcode != 0) {
        QMessageBox::warning(nullptr, tr("Error"), "Could not load Faust file.");
        tempDir.removeRecursively();
        return;
    }

    QFile jsonfile(dspfile + ".json");
    jsonfile.open(QIODevice::ReadOnly);
    QJsonDocument doc = QJsonDocument::fromJson(jsonfile.readAll());
    jsonfile.close();
    tempDir.removeRecursively();

    if (doc.isNull()) {
        QMessageBox::warning(nullptr, tr("Error"), "Could not read JSON data.");
        return;
    }

    QString filebase = fileinfo.baseName();
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
