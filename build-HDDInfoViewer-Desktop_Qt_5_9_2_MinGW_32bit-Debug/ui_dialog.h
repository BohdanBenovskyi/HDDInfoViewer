/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *btnGetInfo;
    QPushButton *btnUpdateDrives;
    QPushButton *btnFormat;
    QGroupBox *grbDrives;
    QGridLayout *gridLayout;
    QListView *lstDrives;
    QGroupBox *grbInfoDrive;
    QVBoxLayout *verticalLayout;
    QLabel *lblTypeOfDrive;
    QLabel *lblNameOfDrive;
    QLabel *lblSerialNumber;
    QLabel *lblFileSystem;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        gridLayout_2 = new QGridLayout(Dialog);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btnGetInfo = new QPushButton(Dialog);
        btnGetInfo->setObjectName(QStringLiteral("btnGetInfo"));

        gridLayout_2->addWidget(btnGetInfo, 2, 0, 1, 1);

        btnUpdateDrives = new QPushButton(Dialog);
        btnUpdateDrives->setObjectName(QStringLiteral("btnUpdateDrives"));

        gridLayout_2->addWidget(btnUpdateDrives, 1, 0, 1, 1);

        btnFormat = new QPushButton(Dialog);
        btnFormat->setObjectName(QStringLiteral("btnFormat"));

        gridLayout_2->addWidget(btnFormat, 3, 0, 1, 1);

        grbDrives = new QGroupBox(Dialog);
        grbDrives->setObjectName(QStringLiteral("grbDrives"));
        gridLayout = new QGridLayout(grbDrives);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lstDrives = new QListView(grbDrives);
        lstDrives->setObjectName(QStringLiteral("lstDrives"));

        gridLayout->addWidget(lstDrives, 0, 0, 1, 1);


        gridLayout_2->addWidget(grbDrives, 0, 0, 1, 1);

        grbInfoDrive = new QGroupBox(Dialog);
        grbInfoDrive->setObjectName(QStringLiteral("grbInfoDrive"));
        verticalLayout = new QVBoxLayout(grbInfoDrive);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lblTypeOfDrive = new QLabel(grbInfoDrive);
        lblTypeOfDrive->setObjectName(QStringLiteral("lblTypeOfDrive"));

        verticalLayout->addWidget(lblTypeOfDrive);

        lblNameOfDrive = new QLabel(grbInfoDrive);
        lblNameOfDrive->setObjectName(QStringLiteral("lblNameOfDrive"));

        verticalLayout->addWidget(lblNameOfDrive);

        lblSerialNumber = new QLabel(grbInfoDrive);
        lblSerialNumber->setObjectName(QStringLiteral("lblSerialNumber"));

        verticalLayout->addWidget(lblSerialNumber);

        lblFileSystem = new QLabel(grbInfoDrive);
        lblFileSystem->setObjectName(QStringLiteral("lblFileSystem"));

        verticalLayout->addWidget(lblFileSystem);


        gridLayout_2->addWidget(grbInfoDrive, 0, 1, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        btnGetInfo->setText(QApplication::translate("Dialog", "\320\236\321\202\321\200\320\270\320\274\320\260\321\202\320\270 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\216", Q_NULLPTR));
        btnUpdateDrives->setText(QApplication::translate("Dialog", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272", Q_NULLPTR));
        btnFormat->setText(QApplication::translate("Dialog", "\320\244\320\276\321\200\320\274\320\260\321\202\321\203\320\262\320\260\321\202\320\270 USB", Q_NULLPTR));
        grbDrives->setTitle(QApplication::translate("Dialog", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\275\320\260\321\217\320\262\320\275\320\270\321\205 \320\264\320\270\321\201\320\272\321\226\320\262", Q_NULLPTR));
        grbInfoDrive->setTitle(QApplication::translate("Dialog", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\264\320\270\321\201\320\272", Q_NULLPTR));
        lblTypeOfDrive->setText(QApplication::translate("Dialog", "\320\242\320\270\320\277 \320\264\320\270\321\201\320\272\320\260:", Q_NULLPTR));
        lblNameOfDrive->setText(QApplication::translate("Dialog", "\320\206\320\274'\321\217 \320\264\320\270\321\201\320\272\320\260:", Q_NULLPTR));
        lblSerialNumber->setText(QApplication::translate("Dialog", "\320\241\320\265\321\200\321\226\320\271\320\275\320\270\320\271 \320\275\320\276\320\274\320\265\321\200:", Q_NULLPTR));
        lblFileSystem->setText(QApplication::translate("Dialog", "\320\244\320\260\320\271\320\273\320\276\320\262\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\320\260:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
