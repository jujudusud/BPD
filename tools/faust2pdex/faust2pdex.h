#pragma once
#include <QApplication>
#include <memory>

class Application : public QApplication {
public:
    Application(int &argc, char *argv[]);
    ~Application();

    void loadFaustFile(const QString &filename);

private:
    struct Impl;
    std::unique_ptr<Impl> P;
};

#define theApp static_cast<Application *>(qApp)
