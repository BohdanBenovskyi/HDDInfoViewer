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
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *grbDrives;
    QGridLayout *gridLayout;
    QListView *lstDrives;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnUpdateDrives;
    QPushButton *btnGetInfo;
    QPushButton *btnFormat;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *grbInfoDrive;
    QVBoxLayout *verticalLayout;
    QLabel *lblTypeOfDrive;
    QLabel *lblNameOfDrive;
    QLabel *lblSerialNumber;
    QLabel *lblFileSystem;
    QGroupBox *grbFreeSpace;
    QGridLayout *gridLayout_2;
    QLabel *lblAvailableSpace;
    QLabel *lblMaxSize;
    QLabel *lblFreeSpace;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(453, 298);
        gridLayout_3 = new QGridLayout(Dialog);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        grbDrives = new QGroupBox(Dialog);
        grbDrives->setObjectName(QStringLiteral("grbDrives"));
        gridLayout = new QGridLayout(grbDrives);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lstDrives = new QListView(grbDrives);
        lstDrives->setObjectName(QStringLiteral("lstDrives"));

        gridLayout->addWidget(lstDrives, 0, 0, 1, 1);


        verticalLayout_4->addWidget(grbDrives);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        btnUpdateDrives = new QPushButton(Dialog);
        btnUpdateDrives->setObjectName(QStringLiteral("btnUpdateDrives"));

        verticalLayout_2->addWidget(btnUpdateDrives);

        btnGetInfo = new QPushButton(Dialog);
        btnGetInfo->setObjectName(QStringLiteral("btnGetInfo"));

        verticalLayout_2->addWidget(btnGetInfo);

        btnFormat = new QPushButton(Dialog);
        btnFormat->setObjectName(QStringLiteral("btnFormat"));

        verticalLayout_2->addWidget(btnFormat);


        verticalLayout_4->addLayout(verticalLayout_2);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
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


        verticalLayout_3->addWidget(grbInfoDrive);

        grbFreeSpace = new QGroupBox(Dialog);
        grbFreeSpace->setObjectName(QStringLiteral("grbFreeSpace"));
        gridLayout_2 = new QGridLayout(grbFreeSpace);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lblAvailableSpace = new QLabel(grbFreeSpace);
        lblAvailableSpace->setObjectName(QStringLiteral("lblAvailableSpace"));

        gridLayout_2->addWidget(lblAvailableSpace, 0, 0, 1, 1);

        lblMaxSize = new QLabel(grbFreeSpace);
        lblMaxSize->setObjectName(QStringLiteral("lblMaxSize"));

        gridLayout_2->addWidget(lblMaxSize, 1, 0, 1, 1);

        lblFreeSpace = new QLabel(grbFreeSpace);
        lblFreeSpace->setObjectName(QStringLiteral("lblFreeSpace"));

        gridLayout_2->addWidget(lblFreeSpace, 2, 0, 1, 1);


        verticalLayout_3->addWidget(grbFreeSpace);


        gridLayout_3->addLayout(verticalLayout_3, 0, 1, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        grbDrives->setTitle(QApplication::translate("Dialog", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\275\320\260\321\217\320\262\320\275\320\270\321\205 \320\264\320\270\321\201\320\272\321\226\320\262", Q_NULLPTR));
        btnUpdateDrives->setText(QApplication::translate("Dialog", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272", Q_NULLPTR));
        btnGetInfo->setText(QApplication::translate("Dialog", "\320\236\321\202\321\200\320\270\320\274\320\260\321\202\320\270 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\216 \320\277\321\200\320\276 \320\264\320\270\321\201\320\272", Q_NULLPTR));
        btnFormat->setText(QApplication::translate("Dialog", "\320\244\320\276\321\200\320\274\320\260\321\202\321\203\320\262\320\260\321\202\320\270 USB", Q_NULLPTR));
        grbInfoDrive->setTitle(QApplication::translate("Dialog", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\277\321\200\320\276 \320\264\320\270\321\201\320\272", Q_NULLPTR));
        lblTypeOfDrive->setText(QApplication::translate("Dialog", "\320\242\320\270\320\277 \320\264\320\270\321\201\320\272\320\260:", Q_NULLPTR));
        lblNameOfDrive->setText(QApplication::translate("Dialog", "\320\206\320\274'\321\217 \320\264\320\270\321\201\320\272\320\260:", Q_NULLPTR));
        lblSerialNumber->setText(QApplication::translate("Dialog", "\320\241\320\265\321\200\321\226\320\271\320\275\320\270\320\271 \320\275\320\276\320\274\320\265\321\200:", Q_NULLPTR));
        lblFileSystem->setText(QApplication::translate("Dialog", "\320\244\320\260\320\271\320\273\320\276\320\262\320\260 \321\201\320\270\321\201\321\202\320\265\320\274\320\260:", Q_NULLPTR));
        grbFreeSpace->setTitle(QApplication::translate("Dialog", "\320\234\320\265\321\202\321\200\320\270\320\272\320\260 \320\264\320\270\321\201\320\272\320\260", Q_NULLPTR));
        lblAvailableSpace->setText(QApplication::translate("Dialog", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\320\276 \320\264\320\273\321\217 \320\262\320\270\320\272\320\276\321\200\320\270\321\201\321\202\320\260\320\275\320\275\321\217 (Gb): ", Q_NULLPTR));
        lblMaxSize->setText(QApplication::translate("Dialog", "\320\227\320\260\320\263\320\260\320\273\321\214\320\275\320\270\320\271 \320\276\320\261'\321\224\320\274 (Gb):", Q_NULLPTR));
        lblFreeSpace->setText(QApplication::translate("Dialog", "\320\222\321\226\320\273\321\214\320\275\320\276 \320\275\320\260 \320\264\320\270\321\201\320\272\321\203 (Gb):", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
