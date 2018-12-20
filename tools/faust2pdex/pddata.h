//          Copyright Jean Pierre Cimalando 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#pragma once
#include <QString>
#include <QVector>
struct FaustData;

struct PdData {
    QString classname;
    const FaustData *faustdata = nullptr;
    bool mainsignalin = false;

    struct Control {
        QString symbol;
        bool hasinlet = false;
        bool haslimit = false;
        int initarg = -1;
        unsigned faustindex = 0;
    };
    QVector<Control> controls;

    struct Input {
        unsigned faustindex = 0;
    };
    QVector<Input> inputs;

    struct Output {
        unsigned faustindex = 0;
    };
    QVector<Output> outputs;

    QString generateExternal() const;
    QString setupFunctionName() const;

    static QString toIdentifier(const QString &name);
    static QString toCString(const QString &text);
};
