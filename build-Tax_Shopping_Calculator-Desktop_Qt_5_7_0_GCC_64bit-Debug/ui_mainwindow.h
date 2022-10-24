/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
    QLineEdit *LocationInput;
    QPushButton *LocationSubmitBtn;
    QLabel *TaxRateStatemtn;
    QLabel *TaxRateShow;
    QLabel *ItemNameTxt;
    QLabel *ItemTypeTxt;
    QLabel *ItemPriceTxt;
    QLineEdit *ItemNameBox;
    QLineEdit *ItemTypeBox;
    QLineEdit *ItemPriceBox;
    QPushButton *AddItemBtn;
    QLabel *TotalText;
    QLabel *TotalPriceText;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(522, 428);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        AppTitle = new QLabel(centralWidget);
        AppTitle->setObjectName(QStringLiteral("AppTitle"));
        AppTitle->setGeometry(QRect(180, 10, 151, 16));
        AppTitle->setLineWidth(2);
        AskLocationTxt = new QLabel(centralWidget);
        AskLocationTxt->setObjectName(QStringLiteral("AskLocationTxt"));
        AskLocationTxt->setGeometry(QRect(20, 60, 231, 16));
        LocationInput = new QLineEdit(centralWidget);
        LocationInput->setObjectName(QStringLiteral("LocationInput"));
        LocationInput->setGeometry(QRect(20, 80, 231, 23));
        LocationSubmitBtn = new QPushButton(centralWidget);
        LocationSubmitBtn->setObjectName(QStringLiteral("LocationSubmitBtn"));
        LocationSubmitBtn->setGeometry(QRect(300, 80, 80, 23));
        TaxRateStatemtn = new QLabel(centralWidget);
        TaxRateStatemtn->setObjectName(QStringLiteral("TaxRateStatemtn"));
        TaxRateStatemtn->setGeometry(QRect(20, 130, 121, 16));
        TaxRateShow = new QLabel(centralWidget);
        TaxRateShow->setObjectName(QStringLiteral("TaxRateShow"));
        TaxRateShow->setGeometry(QRect(160, 130, 131, 16));
        ItemNameTxt = new QLabel(centralWidget);
        ItemNameTxt->setObjectName(QStringLiteral("ItemNameTxt"));
        ItemNameTxt->setGeometry(QRect(40, 220, 81, 16));
        ItemTypeTxt = new QLabel(centralWidget);
        ItemTypeTxt->setObjectName(QStringLiteral("ItemTypeTxt"));
        ItemTypeTxt->setGeometry(QRect(210, 220, 81, 16));
        ItemPriceTxt = new QLabel(centralWidget);
        ItemPriceTxt->setObjectName(QStringLiteral("ItemPriceTxt"));
        ItemPriceTxt->setGeometry(QRect(390, 220, 59, 15));
        ItemNameBox = new QLineEdit(centralWidget);
        ItemNameBox->setObjectName(QStringLiteral("ItemNameBox"));
        ItemNameBox->setGeometry(QRect(20, 260, 113, 23));
        ItemTypeBox = new QLineEdit(centralWidget);
        ItemTypeBox->setObjectName(QStringLiteral("ItemTypeBox"));
        ItemTypeBox->setGeometry(QRect(190, 260, 113, 23));
        ItemPriceBox = new QLineEdit(centralWidget);
        ItemPriceBox->setObjectName(QStringLiteral("ItemPriceBox"));
        ItemPriceBox->setGeometry(QRect(360, 260, 113, 23));
        AddItemBtn = new QPushButton(centralWidget);
        AddItemBtn->setObjectName(QStringLiteral("AddItemBtn"));
        AddItemBtn->setGeometry(QRect(210, 320, 80, 23));
        TotalText = new QLabel(centralWidget);
        TotalText->setObjectName(QStringLiteral("TotalText"));
        TotalText->setGeometry(QRect(150, 370, 59, 15));
        TotalPriceText = new QLabel(centralWidget);
        TotalPriceText->setObjectName(QStringLiteral("TotalPriceText"));
        TotalPriceText->setGeometry(QRect(230, 370, 59, 15));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        AppTitle->setText(QApplication::translate("MainWindow", "Tax Shopping Calculator", 0));
        AskLocationTxt->setText(QApplication::translate("MainWindow", "Enter Location to determine Tax Rate:", 0));
        LocationInput->setText(QString());
        LocationSubmitBtn->setText(QApplication::translate("MainWindow", "Submit", 0));
        TaxRateStatemtn->setText(QApplication::translate("MainWindow", "You're Tax Rate is:", 0));
        TaxRateShow->setText(QApplication::translate("MainWindow", "???", 0));
        ItemNameTxt->setText(QApplication::translate("MainWindow", "Item Name", 0));
        ItemTypeTxt->setText(QApplication::translate("MainWindow", "Item Type", 0));
        ItemPriceTxt->setText(QApplication::translate("MainWindow", "Price", 0));
        AddItemBtn->setText(QApplication::translate("MainWindow", "Add Item", 0));
        TotalText->setText(QApplication::translate("MainWindow", "Total is:", 0));
        TotalPriceText->setText(QApplication::translate("MainWindow", "$0.00", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
