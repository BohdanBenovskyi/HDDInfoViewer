#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <windows.h>
#include <QDebug>
#include <QStringListModel>
#include <lmcons.h>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    void CheckDrives();
    ~Dialog();

signals:
    void selectedLstItem();

private slots:
    void on_btnUpdateDrives_clicked();
    void on_btnGetInfo_clicked();
    void on_btnFormat_clicked();
    void on_btnFormat_enabled();

private:
    Ui::Dialog *ui;
    QStringListModel *model;

};

#endif // DIALOG_H
