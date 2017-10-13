#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    model = new QStringListModel(this);
    CheckDrives();
}

void Dialog::CheckDrives()
{
    int n;
    char dd[4];
    QStringList lst;
    DWORD dr = GetLogicalDrives();

    for( int i = 0; i < 26; i++ )
    {
        n = ((dr>>i)&0x00000001);
        if( n == 1 )
        {
            dd[0] =  char(65+i);
            dd[1] = ':';
            dd[2] = '\\';
            dd[3] = 0;
            lst << dd;
            model->setStringList(lst);
            ui->lstDrives->setModel(model);
        }
    }
}

Dialog::~Dialog()
{
    delete ui;
}
