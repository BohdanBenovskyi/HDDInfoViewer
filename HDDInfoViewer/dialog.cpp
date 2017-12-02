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
    LPCWSTR item = (const wchar_t*) selItem.utf16();
    int d;
    d = GetDriveType(item);
    if(d == DRIVE_UNKNOWN)
        ui->lblTypeOfDrive->setText("Тип диска: неможливо визначити");
    if(d == DRIVE_NO_ROOT_DIR)
        ui->lblTypeOfDrive->setText("Тип диска: невірно заданий шлях");
    if(d == DRIVE_REMOVABLE)
        ui->lblTypeOfDrive->setText("Тип диска: зовнішній носій");
    if(d == DRIVE_FIXED)
        ui->lblTypeOfDrive->setText("Тип диска: фіксований");
    if(d == DRIVE_REMOTE)
        ui->lblTypeOfDrive->setText("Тип диска: віддалений або network диск");
    if(d == DRIVE_CDROM)
        ui->lblTypeOfDrive->setText("Тип диска: CD-ROM");
    if(d == DRIVE_RAMDISK)
        ui->lblTypeOfDrive->setText("Тип диска: RAM диск");

    char VolumeNameBuffer[100];
    char FileSystemNameBuffer[100];
    unsigned long VolumeSerialNumber;

    bool GetVolumeInformationFlag = GetVolumeInformationA(selItem.toStdString().c_str(),
        VolumeNameBuffer, 100, &VolumeSerialNumber, NULL, NULL, FileSystemNameBuffer, 100);

        if(GetVolumeInformationFlag != 0)
        {
            ui->lblNameOfDrive->setText("Ім'я диска: " + QString(VolumeNameBuffer));
            ui->lblSerialNumber->setText("Серійний номер: " + QString::number(VolumeSerialNumber));
            ui->lblFileSystem->setText("Файлова система: " + QString(FileSystemNameBuffer));
        }
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


