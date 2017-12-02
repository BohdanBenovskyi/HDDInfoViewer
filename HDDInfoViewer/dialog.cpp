#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->btnFormat->setEnabled(false);
    model = new QStringListModel(this);
    CheckDrives();
    connect(ui->lstDrives, SIGNAL(clicked(QModelIndex)), this, SLOT(on_btnFormat_enabled()));
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

void Dialog::on_btnUpdateDrives_clicked()
{
    CheckDrives();
}

void Dialog::on_btnGetInfo_clicked()
{
    QModelIndex index = ui->lstDrives->currentIndex();
    QString selItem = index.data(Qt::DisplayRole).toString();
    qDebug() << "item: " << selItem << endl;
}

void Dialog::on_btnFormat_clicked()
{
    qDebug() << "Format was clicked";
}

void Dialog::on_btnFormat_enabled()
{
    QModelIndex index = ui->lstDrives->currentIndex();
    QString selItem = index.data(Qt::DisplayRole).toString();
    LPCWSTR item = (const wchar_t*) selItem.utf16();
    int d;
    d = GetDriveType(item);
    if(d == DRIVE_REMOVABLE)
        ui->btnFormat->setEnabled(true);
    else
       ui->btnFormat->setEnabled(false);
}


