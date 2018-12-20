//          Copyright Jean Pierre Cimalando 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include "pd_object_view.h"
#include "pddata.h"
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsTextItem>
#include <QTextCursor>
#include <QDebug>

struct PdObjectView::Impl {
    QGraphicsScene *scene_ = nullptr;
    QFont font_;

    static constexpr int port_width = 20;
    static constexpr int port_height = 8;
    static constexpr int port_spacing = 20;
    static constexpr int obj_height = 46;
};

PdObjectView::PdObjectView(QWidget *parent)
    : QGraphicsView(parent), P(new Impl)
{
    setBackgroundRole(QPalette::Window);

    QFont font("Monospace");
    font.setStyleHint(QFont::TypeWriter);
    P->font_ = font;

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    QGraphicsScene *scene = P->scene_ = new QGraphicsScene(this);
    setScene(scene);
}

PdObjectView::~PdObjectView()
{
}

void PdObjectView::displayPdData(const PdData &p)
{
    delete P->scene_;
    QGraphicsScene *scene = P->scene_ = new QGraphicsScene(this);
    setScene(scene);

    qreal objw = 100;

    unsigned inlets = p.inputs.size();
    unsigned outlets = p.outputs.size();

    unsigned controls = 0;
    QVector<const PdData::Control *> ctlins;
    for (const PdData::Control &c : p.controls) {
        if (c.hasinlet) {
            ctlins.push_back(&c);
            ++controls;
        }
    }

    unsigned ports = std::max(inlets + controls, outlets);

    unsigned initargs = 0;
    for (const PdData::Control &c : p.controls)
        initargs = std::max((unsigned)c.initarg + 1, initargs);

    QVector<unsigned> initarg(initargs);
    for (const PdData::Control &c : p.controls) {
        if (c.initarg >= 0)
            ++initarg[(unsigned)c.initarg];
    }

    if (ports > 0) {
        qreal minw = (int)ports * (Impl::port_width + Impl::port_spacing) - Impl::port_spacing;
        objw = std::max(objw, minw);
    }

    QString labeltext = p.classname.toHtmlEscaped();
    for (unsigned i = 0; i < initargs; ++i) {
        labeltext.push_back(' ');
        labeltext.push_back((initarg[i] == 1) ? "<span>" : "<span style='color: red;'>");
        labeltext.push_back('a');
        labeltext.push_back(QString::number(i + 1));
        labeltext.push_back("</span>");
    }

    QGraphicsTextItem *label = new QGraphicsTextItem;
    label->setHtml(labeltext);
    label->setFont(P->font_);
    scene->addItem(label);
    QRectF labelrect = label->boundingRect();

    objw = std::max(objw, labelrect.width() + 8);

    QGraphicsRectItem *body = new QGraphicsRectItem(0, 0, objw, Impl::obj_height);
    scene->addItem(body);
    body->setBrush(QColor(0xff, 0xff, 0xbf));
    QRectF bodyrect = body->rect();

    QSizeF labeloff = 0.5 * (bodyrect.size() - labelrect.size());
    label->setPos(bodyrect.topLeft() + QPointF(labeloff.width(), labeloff.height()));
    label->setZValue(1.0);

    for (unsigned i = 0; i < inlets + controls + outlets; ++i) {
        bool isinput = i < inlets + controls;
        bool iscontrol = isinput && i >= inlets;
        unsigned j = isinput ? i : (i - (inlets + controls));

        QRectF rect;
        rect.setX(j * (Impl::port_spacing + Impl::port_width));
        rect.setY(isinput ? bodyrect.y() : (bodyrect.y() + bodyrect.height() - Impl::port_height));
        rect.setWidth(Impl::port_width);
        rect.setHeight(Impl::port_height);

        QGraphicsRectItem *port = new QGraphicsRectItem(rect);
        scene->addItem(port);
        port->setZValue(1.0);

        port->setPen(QPen(Qt::black));
        if (!iscontrol)
            port->setBrush(Qt::black);

        QString text =
            iscontrol ? ctlins[j - inlets]->symbol :
            isinput ? QString("Input %1").arg(j) :
            QString("Output %1").arg(j);
        port->setToolTip(text);
    }

    centerOn(body);
}
