#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <windows.h>
#include <QDebug>

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

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
