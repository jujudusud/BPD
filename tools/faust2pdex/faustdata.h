#pragma once
#include <QString>
#include <QVector>
class QJsonDocument;

struct FaustData {
    QString filename;
    QString id;
    unsigned inputs;
    unsigned outputs;

    struct Control {
        enum Type { Number, Boolean };
        Type type = Number;
        double init = 0;
        double min = 0;
        double max = 0;
        double step = 0;
        QString label;
    };
    QVector<Control> controls;

    static FaustData loadJson(const QString &filebase, const QJsonDocument &doc);
};
