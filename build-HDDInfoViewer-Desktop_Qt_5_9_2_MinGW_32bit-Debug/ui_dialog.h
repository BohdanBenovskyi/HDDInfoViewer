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
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGroupBox *grbDrives;
    QGridLayout *gridLayout;
    QListView *lstDrives;
    QPushButton *btnUpdateDrives;
    QPushButton *btnFormat;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        grbDrives = new QGroupBox(Dialog);
        grbDrives->setObjectName(QStringLiteral("grbDrives"));
        grbDrives->setGeometry(QRect(10, 10, 141, 151));
        gridLayout = new QGridLayout(grbDrives);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lstDrives = new QListView(grbDrives);
        lstDrives->setObjectName(QStringLiteral("lstDrives"));

        gridLayout->addWidget(lstDrives, 0, 0, 1, 1);

        btnUpdateDrives = new QPushButton(Dialog);
        btnUpdateDrives->setObjectName(QStringLiteral("btnUpdateDrives"));
        btnUpdateDrives->setGeometry(QRect(10, 170, 141, 23));
        btnFormat = new QPushButton(Dialog);
        btnFormat->setObjectName(QStringLiteral("btnFormat"));
        btnFormat->setGeometry(QRect(10, 200, 141, 23));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        grbDrives->setTitle(QApplication::translate("Dialog", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\275\320\260\321\217\320\262\320\275\320\270\321\205 \320\264\320\270\321\201\320\272\321\226\320\262", Q_NULLPTR));
        btnUpdateDrives->setText(QApplication::translate("Dialog", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270 \321\201\320\277\320\270\321\201\320\276\320\272", Q_NULLPTR));
        btnFormat->setText(QApplication::translate("Dialog", "\320\244\320\276\321\200\320\274\320\260\321\202\321\203\320\262\320\260\321\202\320\270 USB", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
