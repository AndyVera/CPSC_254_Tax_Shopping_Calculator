/********************************************************************************
** Form generated from reading UI file 'receipts.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPTS_H
#define UI_RECEIPTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Receipts
{
public:
    QLabel *TitlePage;
    QPushButton *ShowReceipts;
    QPushButton *SelectReceipt;
    QComboBox *ReceiptList;
    QLabel *NoReceiptsFound;
    QPushButton *findfromfs;

    void setupUi(QDialog *Receipts)
    {
        if (Receipts->objectName().isEmpty())
            Receipts->setObjectName(QString::fromUtf8("Receipts"));
        Receipts->resize(400, 300);
        TitlePage = new QLabel(Receipts);
        TitlePage->setObjectName(QString::fromUtf8("TitlePage"));
        TitlePage->setGeometry(QRect(150, 0, 121, 51));
        ShowReceipts = new QPushButton(Receipts);
        ShowReceipts->setObjectName(QString::fromUtf8("ShowReceipts"));
        ShowReceipts->setGeometry(QRect(70, 240, 121, 25));
        SelectReceipt = new QPushButton(Receipts);
        SelectReceipt->setObjectName(QString::fromUtf8("SelectReceipt"));
        SelectReceipt->setGeometry(QRect(210, 240, 121, 25));
        ReceiptList = new QComboBox(Receipts);
        ReceiptList->setObjectName(QString::fromUtf8("ReceiptList"));
        ReceiptList->setGeometry(QRect(90, 60, 211, 25));
        NoReceiptsFound = new QLabel(Receipts);
        NoReceiptsFound->setObjectName(QString::fromUtf8("NoReceiptsFound"));
        NoReceiptsFound->setGeometry(QRect(130, 70, 141, 17));
        findfromfs = new QPushButton(Receipts);
        findfromfs->setObjectName(QString::fromUtf8("findfromfs"));
        findfromfs->setGeometry(QRect(160, 180, 89, 25));

        retranslateUi(Receipts);

        QMetaObject::connectSlotsByName(Receipts);
    } // setupUi

    void retranslateUi(QDialog *Receipts)
    {
        Receipts->setWindowTitle(QCoreApplication::translate("Receipts", "Dialog", nullptr));
        TitlePage->setText(QCoreApplication::translate("Receipts", "Receipts Page", nullptr));
        ShowReceipts->setText(QCoreApplication::translate("Receipts", "Show Receipts", nullptr));
        SelectReceipt->setText(QCoreApplication::translate("Receipts", "Select Receipt", nullptr));
        NoReceiptsFound->setText(QCoreApplication::translate("Receipts", "No Receipts Found", nullptr));
        findfromfs->setText(QCoreApplication::translate("Receipts", "Find", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receipts: public Ui_Receipts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPTS_H
