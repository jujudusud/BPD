//          Copyright Jean Pierre Cimalando 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

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
