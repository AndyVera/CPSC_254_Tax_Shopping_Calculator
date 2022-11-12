/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *AppTitle;
    QLabel *AskLocationTxt;
    QPushButton *LocationSubmitBtn;
    QLabel *TaxRateStatemtn;
    QLabel *TaxRateShow;
    QLabel *ItemNameTxt;
    QLabel *ItemTypeTxt;
    QLabel *ItemPriceTxt;
    QLineEdit *ItemNameBox;
    QLineEdit *ItemPriceBox;
    QPushButton *AddItemBtn;
    QLabel *TotalText;
    QLabel *TotalPriceText;
    QLabel *SubtotalText_2;
    QLabel *SubtotalText;
    QComboBox *ItemTypeCombo;
    QComboBox *LocationCombo;
    QPushButton *DeleteItemBtn;
    QPushButton *ClearBtn;
    QPushButton *DisplayBtn;
    QPushButton *SavelistBtn;
    QPushButton *LogoutButton;
    QPushButton *RecieptsBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(522, 428);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        AppTitle = new QLabel(centralWidget);
        AppTitle->setObjectName(QString::fromUtf8("AppTitle"));
        AppTitle->setGeometry(QRect(170, 10, 181, 41));
        AskLocationTxt = new QLabel(centralWidget);
        AskLocationTxt->setObjectName(QString::fromUtf8("AskLocationTxt"));
        AskLocationTxt->setGeometry(QRect(20, 80, 271, 31));
        AskLocationTxt->setLineWidth(2);
        LocationSubmitBtn = new QPushButton(centralWidget);
        LocationSubmitBtn->setObjectName(QString::fromUtf8("LocationSubmitBtn"));
        LocationSubmitBtn->setGeometry(QRect(290, 120, 80, 23));
        TaxRateStatemtn = new QLabel(centralWidget);
        TaxRateStatemtn->setObjectName(QString::fromUtf8("TaxRateStatemtn"));
        TaxRateStatemtn->setGeometry(QRect(20, 160, 131, 16));
        TaxRateShow = new QLabel(centralWidget);
        TaxRateShow->setObjectName(QString::fromUtf8("TaxRateShow"));
        TaxRateShow->setGeometry(QRect(160, 160, 61, 16));
        ItemNameTxt = new QLabel(centralWidget);
        ItemNameTxt->setObjectName(QString::fromUtf8("ItemNameTxt"));
        ItemNameTxt->setGeometry(QRect(40, 200, 81, 16));
        ItemTypeTxt = new QLabel(centralWidget);
        ItemTypeTxt->setObjectName(QString::fromUtf8("ItemTypeTxt"));
        ItemTypeTxt->setGeometry(QRect(210, 200, 81, 16));
        ItemPriceTxt = new QLabel(centralWidget);
        ItemPriceTxt->setObjectName(QString::fromUtf8("ItemPriceTxt"));
        ItemPriceTxt->setGeometry(QRect(390, 200, 59, 15));
        ItemNameBox = new QLineEdit(centralWidget);
        ItemNameBox->setObjectName(QString::fromUtf8("ItemNameBox"));
        ItemNameBox->setGeometry(QRect(20, 240, 113, 23));
        ItemPriceBox = new QLineEdit(centralWidget);
        ItemPriceBox->setObjectName(QString::fromUtf8("ItemPriceBox"));
        ItemPriceBox->setGeometry(QRect(360, 240, 113, 23));
        AddItemBtn = new QPushButton(centralWidget);
        AddItemBtn->setObjectName(QString::fromUtf8("AddItemBtn"));
        AddItemBtn->setGeometry(QRect(30, 290, 80, 23));
        TotalText = new QLabel(centralWidget);
        TotalText->setObjectName(QString::fromUtf8("TotalText"));
        TotalText->setGeometry(QRect(170, 400, 101, 16));
        TotalPriceText = new QLabel(centralWidget);
        TotalPriceText->setObjectName(QString::fromUtf8("TotalPriceText"));
        TotalPriceText->setGeometry(QRect(270, 400, 59, 15));
        SubtotalText_2 = new QLabel(centralWidget);
        SubtotalText_2->setObjectName(QString::fromUtf8("SubtotalText_2"));
        SubtotalText_2->setGeometry(QRect(170, 380, 91, 17));
        SubtotalText = new QLabel(centralWidget);
        SubtotalText->setObjectName(QString::fromUtf8("SubtotalText"));
        SubtotalText->setGeometry(QRect(270, 380, 67, 17));
        ItemTypeCombo = new QComboBox(centralWidget);
        ItemTypeCombo->setObjectName(QString::fromUtf8("ItemTypeCombo"));
        ItemTypeCombo->setGeometry(QRect(210, 240, 86, 25));
        LocationCombo = new QComboBox(centralWidget);
        LocationCombo->setObjectName(QString::fromUtf8("LocationCombo"));
        LocationCombo->setGeometry(QRect(20, 120, 251, 25));
        DeleteItemBtn = new QPushButton(centralWidget);
        DeleteItemBtn->setObjectName(QString::fromUtf8("DeleteItemBtn"));
        DeleteItemBtn->setGeometry(QRect(140, 290, 89, 25));
        ClearBtn = new QPushButton(centralWidget);
        ClearBtn->setObjectName(QString::fromUtf8("ClearBtn"));
        ClearBtn->setGeometry(QRect(260, 290, 89, 25));
        DisplayBtn = new QPushButton(centralWidget);
        DisplayBtn->setObjectName(QString::fromUtf8("DisplayBtn"));
        DisplayBtn->setGeometry(QRect(380, 290, 89, 25));
        SavelistBtn = new QPushButton(centralWidget);
        SavelistBtn->setObjectName(QString::fromUtf8("SavelistBtn"));
        SavelistBtn->setGeometry(QRect(200, 340, 89, 25));
        LogoutButton = new QPushButton(centralWidget);
        LogoutButton->setObjectName(QString::fromUtf8("LogoutButton"));
        LogoutButton->setGeometry(QRect(420, 10, 89, 25));
        RecieptsBtn = new QPushButton(centralWidget);
        RecieptsBtn->setObjectName(QString::fromUtf8("RecieptsBtn"));
        RecieptsBtn->setGeometry(QRect(420, 50, 89, 25));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        AppTitle->setText(QApplication::translate("MainWindow", "Tax Shopping Calculator", nullptr));
        AskLocationTxt->setText(QApplication::translate("MainWindow", "Enter Location to determine Tax Rate:", nullptr));
        LocationSubmitBtn->setText(QApplication::translate("MainWindow", "Submit", nullptr));
        TaxRateStatemtn->setText(QApplication::translate("MainWindow", "You're Tax Rate is:", nullptr));
        TaxRateShow->setText(QApplication::translate("MainWindow", "???", nullptr));
        ItemNameTxt->setText(QApplication::translate("MainWindow", "Item Name", nullptr));
        ItemTypeTxt->setText(QApplication::translate("MainWindow", "Item Type", nullptr));
        ItemPriceTxt->setText(QApplication::translate("MainWindow", "Price", nullptr));
        AddItemBtn->setText(QApplication::translate("MainWindow", "Add Item", nullptr));
        TotalText->setText(QApplication::translate("MainWindow", "Grandtotal is:", nullptr));
        TotalPriceText->setText(QApplication::translate("MainWindow", "$0.00", nullptr));
        SubtotalText_2->setText(QApplication::translate("MainWindow", "Subtotal is: ", nullptr));
        SubtotalText->setText(QApplication::translate("MainWindow", "$0.00", nullptr));
        DeleteItemBtn->setText(QApplication::translate("MainWindow", "Delete Item", nullptr));
        ClearBtn->setText(QApplication::translate("MainWindow", "Clear List", nullptr));
        DisplayBtn->setText(QApplication::translate("MainWindow", "Display", nullptr));
        SavelistBtn->setText(QApplication::translate("MainWindow", "Save", nullptr));
        LogoutButton->setText(QApplication::translate("MainWindow", "Logout", nullptr));
        RecieptsBtn->setText(QApplication::translate("MainWindow", "Reciepts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
