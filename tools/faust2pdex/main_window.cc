#include "main_window.h"
#include "ui_main_window.h"
#include "faust2pdex.h"
#include "faustdata.h"
#include "pddata.h"
#include <QTextEdit>
#include <QFileDialog>
#include <QDebug>

struct MainWindow::Impl {
    Ui::MainWindow ui;
    FaustData faustdata;
};

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), P(new Impl)
{
    P->ui.setupUi(this);

    for (QTableWidget *tw :
             {P->ui.tw_ctlin, P->ui.tw_sigin, P->ui.tw_sigout}) {
        tw->setSelectionMode(QTableWidget::SingleSelection);
        tw->setSelectionBehavior(QTableWidget::SelectRows);
    }
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

    tw_ctlin->setColumnCount(4);
    tw_ctlin->setRowCount(f.controls.size());
    tw_ctlin->setHorizontalHeaderLabels({
            tr("Control"),
            tr("Pd symbol"),
            tr("Inlet?"),
            tr("Limit?"),
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
    PdData p;
    p.classname = P->ui.txt_classname->text();
    p.faustdata = &P->faustdata;
    p.mainsignalin = P->ui.chk_mainSignalIn->isChecked();

    QTableWidget *tw_ctlin = P->ui.tw_ctlin;
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

        p.controls.push_back(ctl);
    }

    QTableWidget *tw_sigin = P->ui.tw_sigin;
    for (unsigned i = 0, n = tw_sigin->rowCount(); i < n; ++i) {
        QTableWidgetItem *item = tw_sigin->item(i, 0);
        // if (item->checkState() != Qt::Checked)
        //     continue;
        PdData::Input sig;
        sig.faustindex = item->data(Qt::UserRole).toInt();
        p.inputs.push_back(sig);
    }

    QTableWidget *tw_sigout = P->ui.tw_sigout;
    for (unsigned i = 0, n = tw_sigout->rowCount(); i < n; ++i) {
        QTableWidgetItem *item = tw_sigout->item(i, 0);
        // if (item->checkState() != Qt::Checked)
        //     continue;
        PdData::Output sig;
        sig.faustindex = item->data(Qt::UserRole).toInt();
        p.outputs.push_back(sig);
    }

    QString code = p.generateExternal();

    QDialog *dlg = new QDialog(this);
    dlg->resize(800, 800);

    QVBoxLayout *vl = new QVBoxLayout;
    dlg->setLayout(vl);

    vl->addWidget(new QLabel(P->ui.txt_classname->text() + ".cc"));

    QTextEdit *txt_code = new QTextEdit;
    vl->addWidget(txt_code);
    txt_code->setReadOnly(false);
    txt_code->setLineWrapMode(QTextEdit::NoWrap);
    txt_code->setText(code);

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
}
