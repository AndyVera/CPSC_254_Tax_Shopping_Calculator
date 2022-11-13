/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
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
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(522, 428);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        AppTitle = new QLabel(centralWidget);
        AppTitle->setObjectName("AppTitle");
        AppTitle->setGeometry(QRect(170, 0, 181, 41));
        AskLocationTxt = new QLabel(centralWidget);
        AskLocationTxt->setObjectName("AskLocationTxt");
        AskLocationTxt->setGeometry(QRect(20, 60, 271, 31));
        AskLocationTxt->setLineWidth(2);
        LocationSubmitBtn = new QPushButton(centralWidget);
        LocationSubmitBtn->setObjectName("LocationSubmitBtn");
        LocationSubmitBtn->setGeometry(QRect(290, 100, 80, 23));
        TaxRateStatemtn = new QLabel(centralWidget);
        TaxRateStatemtn->setObjectName("TaxRateStatemtn");
        TaxRateStatemtn->setGeometry(QRect(20, 150, 131, 16));
        TaxRateShow = new QLabel(centralWidget);
        TaxRateShow->setObjectName("TaxRateShow");
        TaxRateShow->setGeometry(QRect(160, 150, 61, 16));
        ItemNameTxt = new QLabel(centralWidget);
        ItemNameTxt->setObjectName("ItemNameTxt");
        ItemNameTxt->setGeometry(QRect(40, 190, 81, 16));
        ItemTypeTxt = new QLabel(centralWidget);
        ItemTypeTxt->setObjectName("ItemTypeTxt");
        ItemTypeTxt->setGeometry(QRect(210, 190, 81, 16));
        ItemPriceTxt = new QLabel(centralWidget);
        ItemPriceTxt->setObjectName("ItemPriceTxt");
        ItemPriceTxt->setGeometry(QRect(390, 190, 59, 15));
        ItemNameBox = new QLineEdit(centralWidget);
        ItemNameBox->setObjectName("ItemNameBox");
        ItemNameBox->setGeometry(QRect(20, 230, 113, 23));
        ItemPriceBox = new QLineEdit(centralWidget);
        ItemPriceBox->setObjectName("ItemPriceBox");
        ItemPriceBox->setGeometry(QRect(360, 230, 113, 23));
        AddItemBtn = new QPushButton(centralWidget);
        AddItemBtn->setObjectName("AddItemBtn");
        AddItemBtn->setGeometry(QRect(30, 290, 80, 23));
        TotalText = new QLabel(centralWidget);
        TotalText->setObjectName("TotalText");
        TotalText->setGeometry(QRect(170, 400, 101, 16));
        TotalPriceText = new QLabel(centralWidget);
        TotalPriceText->setObjectName("TotalPriceText");
        TotalPriceText->setGeometry(QRect(270, 400, 59, 15));
        SubtotalText_2 = new QLabel(centralWidget);
        SubtotalText_2->setObjectName("SubtotalText_2");
        SubtotalText_2->setGeometry(QRect(170, 380, 91, 17));
        SubtotalText = new QLabel(centralWidget);
        SubtotalText->setObjectName("SubtotalText");
        SubtotalText->setGeometry(QRect(270, 380, 67, 17));
        ItemTypeCombo = new QComboBox(centralWidget);
        ItemTypeCombo->setObjectName("ItemTypeCombo");
        ItemTypeCombo->setGeometry(QRect(210, 230, 86, 25));
        LocationCombo = new QComboBox(centralWidget);
        LocationCombo->setObjectName("LocationCombo");
        LocationCombo->setGeometry(QRect(20, 100, 251, 25));
        DeleteItemBtn = new QPushButton(centralWidget);
        DeleteItemBtn->setObjectName("DeleteItemBtn");
        DeleteItemBtn->setGeometry(QRect(140, 290, 89, 25));
        ClearBtn = new QPushButton(centralWidget);
        ClearBtn->setObjectName("ClearBtn");
        ClearBtn->setGeometry(QRect(260, 290, 89, 25));
        DisplayBtn = new QPushButton(centralWidget);
        DisplayBtn->setObjectName("DisplayBtn");
        DisplayBtn->setGeometry(QRect(380, 290, 89, 25));
        SavelistBtn = new QPushButton(centralWidget);
        SavelistBtn->setObjectName("SavelistBtn");
        SavelistBtn->setGeometry(QRect(200, 340, 89, 25));
        LogoutButton = new QPushButton(centralWidget);
        LogoutButton->setObjectName("LogoutButton");
        LogoutButton->setGeometry(QRect(420, 10, 89, 25));
        RecieptsBtn = new QPushButton(centralWidget);
        RecieptsBtn->setObjectName("RecieptsBtn");
        RecieptsBtn->setGeometry(QRect(420, 50, 89, 25));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AppTitle->setText(QCoreApplication::translate("MainWindow", "Tax Shopping Calculator", nullptr));
        AskLocationTxt->setText(QCoreApplication::translate("MainWindow", "Enter Location to determine Tax Rate:", nullptr));
        LocationSubmitBtn->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        TaxRateStatemtn->setText(QCoreApplication::translate("MainWindow", "You're Tax Rate is:", nullptr));
        TaxRateShow->setText(QCoreApplication::translate("MainWindow", "???", nullptr));
        ItemNameTxt->setText(QCoreApplication::translate("MainWindow", "Item Name", nullptr));
        ItemTypeTxt->setText(QCoreApplication::translate("MainWindow", "Item Type", nullptr));
        ItemPriceTxt->setText(QCoreApplication::translate("MainWindow", "Price", nullptr));
        AddItemBtn->setText(QCoreApplication::translate("MainWindow", "Add Item", nullptr));
        TotalText->setText(QCoreApplication::translate("MainWindow", "Grandtotal is:", nullptr));
        TotalPriceText->setText(QCoreApplication::translate("MainWindow", "$0.00", nullptr));
        SubtotalText_2->setText(QCoreApplication::translate("MainWindow", "Subtotal is: ", nullptr));
        SubtotalText->setText(QCoreApplication::translate("MainWindow", "$0.00", nullptr));
        DeleteItemBtn->setText(QCoreApplication::translate("MainWindow", "Delete Item", nullptr));
        ClearBtn->setText(QCoreApplication::translate("MainWindow", "Clear List", nullptr));
        DisplayBtn->setText(QCoreApplication::translate("MainWindow", "Display", nullptr));
        SavelistBtn->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        LogoutButton->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        RecieptsBtn->setText(QCoreApplication::translate("MainWindow", "Reciepts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
