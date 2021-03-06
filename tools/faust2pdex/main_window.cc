//          Copyright Jean Pierre Cimalando 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#include "main_window.h"
#include "ui_main_window.h"
#include "faust2pdex.h"
#include "faustdata.h"
#include "pddata.h"
#include <QTextEdit>
#include <QFileDialog>
#include <QMessageBox>
#include <QCheckBox>
#include <QSpinBox>
#include <QTimer>
#include <QDebug>

struct MainWindow::Impl {
    Ui::MainWindow ui;
    FaustData faustdata;
    QTimer *timer = nullptr;
    PdData getPdData() const;
    void requestObjectDisplayUpdate();
    void updateObjectDisplay();
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), P(new Impl)
{
    P->ui.setupUi(this);

    P->ui.splitter->setStretchFactor(0, 2);

    for (QTableWidget *tw :
             {P->ui.tw_ctlin, P->ui.tw_sigin, P->ui.tw_sigout}) {
        tw->setSelectionMode(QTableWidget::SingleSelection);
        tw->setSelectionBehavior(QTableWidget::SelectRows);
    }

    connect(
        P->ui.tw_ctlin, &QTableWidget::itemChanged,
        this, [this]() { P->requestObjectDisplayUpdate(); });

    QTimer *timer = P->timer = new QTimer(this);
    timer->setSingleShot(true);
    connect(
        timer, &QTimer::timeout,
        this, [this]() { P->updateObjectDisplay(); });

    P->requestObjectDisplayUpdate();
}

MainWindow::~MainWindow()
{
}

void MainWindow::loadFaustData(const FaustData &f)
{
    P->faustdata = f;

    P->ui.lbl_filename->setText(
        tr("File: %1").arg(f.filename));
    P->ui.txt_classname->setText(f.filename + '~');
    P->ui.chk_mainSignalIn->setChecked(true);

    typedef FaustData::Control Control;

    QTableWidget *tw_ctlin = P->ui.tw_ctlin;
    tw_ctlin->clear();

    tw_ctlin->setColumnCount(5);
    tw_ctlin->setRowCount(f.controls.size());
    tw_ctlin->setHorizontalHeaderLabels({
            tr("Control"),
            tr("Pd symbol"),
            tr("Inlet?"),
            tr("Limit?"),
            tr("Init arg?"),
        });

    unsigned row = 0;
    for (const Control &ctl : f.controls) {
        unsigned col = 0;
        QTableWidgetItem *item;

        item = new QTableWidgetItem(ctl.label);
        item->setCheckState(Qt::Checked);
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        tw_ctlin->setItem(row, col++, item);

        item = new QTableWidgetItem(ctl.label);
        tw_ctlin->setItem(row, col++, item);

        item = new QTableWidgetItem;
        item->setCheckState(Qt::Checked);
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        tw_ctlin->setItem(row, col++, item);

        item = new QTableWidgetItem(QString("[%1;%2]").arg(ctl.min).arg(ctl.max));
        item->setCheckState(Qt::Checked);
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        tw_ctlin->setItem(row, col++, item);

        item = new QTableWidgetItem;
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        tw_ctlin->setItem(row, col++, item);
        {
            QWidget *w = new QWidget;
            tw_ctlin->setCellWidget(row, col - 1, w);
            QHBoxLayout *hl = new QHBoxLayout;
            w->setLayout(hl);
            hl->setContentsMargins(3, 2, 3, 2);

            QCheckBox *chk = new QCheckBox;
            hl->addWidget(chk);

            QSpinBox *val = new QSpinBox;
            hl->addWidget(val);
            val->setRange(1, f.controls.size());
            val->setSizePolicy(
                QSizePolicy::MinimumExpanding, val->sizePolicy().verticalPolicy());

            item->setData(Qt::UserRole, (qulonglong)(uintptr_t)chk);
            item->setData(Qt::UserRole + 1, (qulonglong)(uintptr_t)val);

            connect(
                chk, &QCheckBox::toggled, this, [this]() { P->requestObjectDisplayUpdate(); });
            connect(
                val, qOverload<int>(&QSpinBox::valueChanged), this, [this](int) { P->requestObjectDisplayUpdate(); });
        }

        ++row;
    }

    //
    QTableWidget *tw_sigin = P->ui.tw_sigin;
    tw_sigin->clear();

    tw_sigin->setColumnCount(1);
    tw_sigin->setRowCount(f.inputs);
    tw_sigin->setHorizontalHeaderLabels({
            tr("Identity"),
        });

    for (unsigned i = 0; i < f.inputs; ++i) {
        QTableWidgetItem *item = new QTableWidgetItem(tr("Input %1").arg(i + 1));
        item->setData(Qt::UserRole, i);
        // item->setCheckState(Qt::Checked);
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        tw_sigin->setItem(i, 0, item);
    }

    //
    QTableWidget *tw_sigout = P->ui.tw_sigout;
    tw_sigout->clear();

    tw_sigout->setColumnCount(1);
    tw_sigout->setRowCount(f.outputs);
    tw_sigout->setHorizontalHeaderLabels({
            tr("Identity"),
        });

    for (unsigned i = 0; i < f.outputs; ++i) {
        QTableWidgetItem *item = new QTableWidgetItem(tr("Output %1").arg(i + 1));
        item->setData(Qt::UserRole, i);
        // item->setCheckState(Qt::Checked);
        item->setFlags(item->flags() & ~Qt::ItemIsEditable);
        tw_sigout->setItem(i, 0, item);
    }

    P->requestObjectDisplayUpdate();
}

void MainWindow::on_btn_loadFaustFile_clicked()
{
    QString filename = QFileDialog::getOpenFileName(
        this, tr("Load Faust File"), QString(), tr("Faust files (*.dsp)"));
    if (filename.isEmpty())
        return;

    theApp->loadFaustFile(filename);
}

void MainWindow::on_btn_generate_clicked()
{
    const PdData p = P->getPdData();

    QString code = p.generateExternal();

    QDialog *dlg = new QDialog(this);
    dlg->resize(1000, 800);

    QVBoxLayout *vl = new QVBoxLayout;
    dlg->setLayout(vl);

    QHBoxLayout *hl = new QHBoxLayout;
    vl->addLayout(hl);

    QString sourceFileName = P->ui.txt_classname->text() + ".cc";
    hl->addWidget(new QLabel(sourceFileName));
    hl->addStretch();
    QToolButton *btn_save = new QToolButton;
    hl->addWidget(btn_save);
    btn_save->setIcon(QIcon::fromTheme("document-save"));

    QTextEdit *txt_code = new QTextEdit;
    vl->addWidget(txt_code);
    txt_code->setReadOnly(false);
    txt_code->setLineWrapMode(QTextEdit::NoWrap);
    txt_code->setText(code);

    QFont font("Monospace");
    font.setStyleHint(QFont::TypeWriter);
    txt_code->setFont(font);

    connect(
        btn_save, &QToolButton::clicked, dlg,
        [this, &sourceFileName, txt_code]() {
            QString filename = QFileDialog::getSaveFileName(
                this, tr("Save file"), sourceFileName, tr("C++ sources (*.cc *.cpp *.cxx)"));
            if (filename.isEmpty())
                return;
            QFile file(filename);
            file.open(QFile::WriteOnly);
            file.write(txt_code->toPlainText().toUtf8());
            if (!file.flush()) {
                file.remove();
                QMessageBox::warning(this, tr("Error"), tr("Could not write the C++ file."));
            }
        });

    dlg->exec();
    dlg->deleteLater();
}

void MainWindow::on_btn_ctlMoveUp_clicked()
{
    QTableWidget *tw = P->ui.tw_ctlin;

    QList<QTableWidgetItem *> sel = tw->selectedItems();
    if (sel.size() < 1)
        return;

    int row = sel.front()->row();
    if (row <= 0)
        return;

    int newRow = row++ - 1;
    tw->insertRow(newRow);
    for (unsigned i = 0, n = tw->columnCount(); i < n; ++i)
        tw->setItem(newRow, i, new QTableWidgetItem(*tw->item(row, i)));
    tw->selectRow(newRow);
    tw->removeRow(row);

    P->requestObjectDisplayUpdate();
}

void MainWindow::on_btn_ctlMoveDown_clicked()
{
    QTableWidget *tw = P->ui.tw_ctlin;

    QList<QTableWidgetItem *> sel = tw->selectedItems();
    if (sel.size() < 1)
        return;

    int row = sel.front()->row();
    if (row + 1 >= tw->rowCount())
        return;

    int newRow = row + 2;
    tw->insertRow(newRow);
    for (unsigned i = 0, n = tw->columnCount(); i < n; ++i)
        tw->setItem(newRow, i, new QTableWidgetItem(*tw->item(row, i)));
    tw->selectRow(newRow);
    tw->removeRow(row);

    P->requestObjectDisplayUpdate();
}

void MainWindow::on_txt_classname_textChanged(const QString &)
{
    P->requestObjectDisplayUpdate();
}

PdData MainWindow::Impl::getPdData() const
{
    PdData p;
    p.classname = ui.txt_classname->text();
    p.faustdata = &faustdata;
    p.mainsignalin = ui.chk_mainSignalIn->isChecked();

    QTableWidget *tw_ctlin = ui.tw_ctlin;
    for (unsigned i = 0, n = tw_ctlin->rowCount(); i < n; ++i) {
        QTableWidgetItem *item0 = tw_ctlin->item(i, 0);
        if (item0->checkState() != Qt::Checked)
            continue;
        PdData::Control ctl;
        ctl.symbol = tw_ctlin->item(i, 1)->text();
        ctl.hasinlet = tw_ctlin->item(i, 2)->checkState() == Qt::Checked;

        QTableWidgetItem *item3 = tw_ctlin->item(i, 3);
        ctl.haslimit = item3->checkState() == Qt::Checked;

        QString label = item0->text();
        for (unsigned i = 0, n = p.faustdata->controls.size(); i < n; ++i) {
            if (p.faustdata->controls[i].label == label) {
                ctl.faustindex = i;
                break;
            }
        }

        QTableWidgetItem *item4 = tw_ctlin->item(i, 4);
        QCheckBox *chk_initarg = (QCheckBox *)(uintptr_t)item4->data(Qt::UserRole).toULongLong();
        QSpinBox *val_initarg = (QSpinBox *)(uintptr_t)item4->data(Qt::UserRole + 1).toULongLong();
        ctl.initarg = chk_initarg->isChecked() ? (val_initarg->value() - 1) : -1;

        p.controls.push_back(ctl);
    }

    QTableWidget *tw_sigin = ui.tw_sigin;
    for (unsigned i = 0, n = tw_sigin->rowCount(); i < n; ++i) {
        QTableWidgetItem *item = tw_sigin->item(i, 0);
        // if (item->checkState() != Qt::Checked)
        //     continue;
        PdData::Input sig;
        sig.faustindex = item->data(Qt::UserRole).toInt();
        p.inputs.push_back(sig);
    }

    QTableWidget *tw_sigout = ui.tw_sigout;
    for (unsigned i = 0, n = tw_sigout->rowCount(); i < n; ++i) {
        QTableWidgetItem *item = tw_sigout->item(i, 0);
        // if (item->checkState() != Qt::Checked)
        //     continue;
        PdData::Output sig;
        sig.faustindex = item->data(Qt::UserRole).toInt();
        p.outputs.push_back(sig);
    }

    return p;
}

void MainWindow::Impl::requestObjectDisplayUpdate()
{
    QTimer *timer = this->timer;
    timer->start(0);
}

void MainWindow::Impl::updateObjectDisplay()
{
    ui.graphicsView->displayPdData(getPdData());
}
