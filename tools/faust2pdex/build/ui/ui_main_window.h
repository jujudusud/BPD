/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "pd_object_view.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *btn_loadFaustFile;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbl_filename;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *txt_classname;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *chk_mainSignalIn;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_8;
    QSplitter *splitter;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *tw_ctlin;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_2;
    QToolButton *btn_ctlMoveUp;
    QToolButton *btn_ctlMoveDown;
    QSpacerItem *verticalSpacer;
    QWidget *widget2;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QTableWidget *tw_sigin;
    QLabel *label_3;
    QTableWidget *tw_sigout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_5;
    QCommandLinkButton *btn_generate;
    PdObjectView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1000, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_loadFaustFile = new QCommandLinkButton(frame);
        btn_loadFaustFile->setObjectName(QStringLiteral("btn_loadFaustFile"));

        horizontalLayout->addWidget(btn_loadFaustFile);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lbl_filename = new QLabel(frame);
        lbl_filename->setObjectName(QStringLiteral("lbl_filename"));

        horizontalLayout->addWidget(lbl_filename);

        horizontalSpacer = new QSpacerItem(254, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(frame);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(widget);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        txt_classname = new QLineEdit(frame_3);
        txt_classname->setObjectName(QStringLiteral("txt_classname"));

        horizontalLayout_2->addWidget(txt_classname);


        horizontalLayout_3->addWidget(frame_3);

        horizontalSpacer_3 = new QSpacerItem(299, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        frame_5 = new QFrame(widget);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        chk_mainSignalIn = new QCheckBox(frame_5);
        chk_mainSignalIn->setObjectName(QStringLiteral("chk_mainSignalIn"));

        horizontalLayout_6->addWidget(chk_mainSignalIn);


        horizontalLayout_3->addWidget(frame_5);


        verticalLayout_4->addWidget(widget);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_2);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        splitter = new QSplitter(frame_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget1 = new QWidget(splitter);
        widget1->setObjectName(QStringLiteral("widget1"));
        verticalLayout_3 = new QVBoxLayout(widget1);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_3->addWidget(label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(1);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        tw_ctlin = new QTableWidget(widget1);
        tw_ctlin->setObjectName(QStringLiteral("tw_ctlin"));

        horizontalLayout_7->addWidget(tw_ctlin);

        frame_6 = new QFrame(widget1);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        btn_ctlMoveUp = new QToolButton(frame_6);
        btn_ctlMoveUp->setObjectName(QStringLiteral("btn_ctlMoveUp"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("go-up");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btn_ctlMoveUp->setIcon(icon);

        verticalLayout_2->addWidget(btn_ctlMoveUp);

        btn_ctlMoveDown = new QToolButton(frame_6);
        btn_ctlMoveDown->setObjectName(QStringLiteral("btn_ctlMoveDown"));
        QIcon icon1;
        iconThemeName = QStringLiteral("go-down");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        btn_ctlMoveDown->setIcon(icon1);

        verticalLayout_2->addWidget(btn_ctlMoveDown);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_7->addWidget(frame_6);


        verticalLayout_3->addLayout(horizontalLayout_7);

        splitter->addWidget(widget1);
        widget2 = new QWidget(splitter);
        widget2->setObjectName(QStringLiteral("widget2"));
        verticalLayout = new QVBoxLayout(widget2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        tw_sigin = new QTableWidget(widget2);
        tw_sigin->setObjectName(QStringLiteral("tw_sigin"));

        verticalLayout->addWidget(tw_sigin);

        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        tw_sigout = new QTableWidget(widget2);
        tw_sigout->setObjectName(QStringLiteral("tw_sigout"));

        verticalLayout->addWidget(tw_sigout);

        splitter->addWidget(widget2);

        horizontalLayout_8->addWidget(splitter);


        verticalLayout_4->addWidget(frame_2);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(widget_2);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btn_generate = new QCommandLinkButton(frame_4);
        btn_generate->setObjectName(QStringLiteral("btn_generate"));

        horizontalLayout_5->addWidget(btn_generate);


        horizontalLayout_4->addWidget(frame_4);

        graphicsView = new PdObjectView(widget_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy1);
        graphicsView->setFrameShape(QFrame::NoFrame);

        horizontalLayout_4->addWidget(graphicsView);


        verticalLayout_4->addWidget(widget_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        btn_loadFaustFile->setText(QApplication::translate("MainWindow", "Load a Faust file", Q_NULLPTR));
        lbl_filename->setText(QApplication::translate("MainWindow", "<no file>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Pd class name:", Q_NULLPTR));
        chk_mainSignalIn->setText(QApplication::translate("MainWindow", "First inlet is Main", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "inlet", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_ctlMoveUp->setToolTip(QApplication::translate("MainWindow", "Move control up", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_ctlMoveUp->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btn_ctlMoveDown->setToolTip(QApplication::translate("MainWindow", "Move control down", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btn_ctlMoveDown->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "inlet~", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "outlet~", Q_NULLPTR));
        btn_generate->setText(QApplication::translate("MainWindow", "Generate Pd external", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
