//          Copyright Jean Pierre Cimalando 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include <QGraphicsView>
#include <memory>
struct PdData;

class PdObjectView : public QGraphicsView {
public:
    explicit PdObjectView(QWidget *parent = nullptr);
    ~PdObjectView();

    void displayPdData(const PdData &p);

private:
    struct Impl;
    std::unique_ptr<Impl> P;
};
