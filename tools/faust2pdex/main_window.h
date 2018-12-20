#pragma once
#include <QMainWindow>
#include <memory>
struct FaustData;

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void loadFaustData(const FaustData &f);

protected slots:
    void on_btn_loadFaustFile_clicked();
    void on_btn_generate_clicked();
    void on_btn_ctlMoveUp_clicked();
    void on_btn_ctlMoveDown_clicked();
    void on_txt_classname_textChanged(const QString &);

private:
    struct Impl;
    std::unique_ptr<Impl> P;
};
