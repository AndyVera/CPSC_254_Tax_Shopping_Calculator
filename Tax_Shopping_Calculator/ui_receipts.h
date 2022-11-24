/********************************************************************************
** Form generated from reading UI file 'receipts.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
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
        ShowReceipts->setGeometry(QRect(60, 240, 121, 25));
        SelectReceipt = new QPushButton(Receipts);
        SelectReceipt->setObjectName(QString::fromUtf8("SelectReceipt"));
        SelectReceipt->setGeometry(QRect(230, 240, 121, 25));
        ReceiptList = new QComboBox(Receipts);
        ReceiptList->setObjectName(QString::fromUtf8("ReceiptList"));
        ReceiptList->setGeometry(QRect(90, 60, 211, 25));
        NoReceiptsFound = new QLabel(Receipts);
        NoReceiptsFound->setObjectName(QString::fromUtf8("NoReceiptsFound"));
        NoReceiptsFound->setGeometry(QRect(130, 70, 141, 17));

        retranslateUi(Receipts);

        QMetaObject::connectSlotsByName(Receipts);
    } // setupUi

    void retranslateUi(QDialog *Receipts)
    {
        Receipts->setWindowTitle(QApplication::translate("Receipts", "Dialog", nullptr));
        TitlePage->setText(QApplication::translate("Receipts", "Receipts Page", nullptr));
        ShowReceipts->setText(QApplication::translate("Receipts", "Show Receipts", nullptr));
        SelectReceipt->setText(QApplication::translate("Receipts", "Select Receipt", nullptr));
        NoReceiptsFound->setText(QApplication::translate("Receipts", "No Receipts Found", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receipts: public Ui_Receipts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPTS_H
