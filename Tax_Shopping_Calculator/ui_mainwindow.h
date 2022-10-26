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
    QLabel *label;
    QLabel *SubtotalText;
    QComboBox *ItemTypeCombo;
    QComboBox *LocationCombo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(522, 428);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        AppTitle = new QLabel(centralWidget);
        AppTitle->setObjectName(QString::fromUtf8("AppTitle"));
        AppTitle->setGeometry(QRect(160, 0, 181, 41));
        AskLocationTxt = new QLabel(centralWidget);
        AskLocationTxt->setObjectName(QString::fromUtf8("AskLocationTxt"));
        AskLocationTxt->setGeometry(QRect(20, 40, 271, 31));
        AskLocationTxt->setLineWidth(2);
        LocationSubmitBtn = new QPushButton(centralWidget);
        LocationSubmitBtn->setObjectName(QString::fromUtf8("LocationSubmitBtn"));
        LocationSubmitBtn->setGeometry(QRect(300, 80, 80, 23));
        TaxRateStatemtn = new QLabel(centralWidget);
        TaxRateStatemtn->setObjectName(QString::fromUtf8("TaxRateStatemtn"));
        TaxRateStatemtn->setGeometry(QRect(20, 130, 131, 16));
        TaxRateShow = new QLabel(centralWidget);
        TaxRateShow->setObjectName(QString::fromUtf8("TaxRateShow"));
        TaxRateShow->setGeometry(QRect(160, 130, 61, 16));
        ItemNameTxt = new QLabel(centralWidget);
        ItemNameTxt->setObjectName(QString::fromUtf8("ItemNameTxt"));
        ItemNameTxt->setGeometry(QRect(40, 220, 81, 16));
        ItemTypeTxt = new QLabel(centralWidget);
        ItemTypeTxt->setObjectName(QString::fromUtf8("ItemTypeTxt"));
        ItemTypeTxt->setGeometry(QRect(210, 220, 81, 16));
        ItemPriceTxt = new QLabel(centralWidget);
        ItemPriceTxt->setObjectName(QString::fromUtf8("ItemPriceTxt"));
        ItemPriceTxt->setGeometry(QRect(390, 220, 59, 15));
        ItemNameBox = new QLineEdit(centralWidget);
        ItemNameBox->setObjectName(QString::fromUtf8("ItemNameBox"));
        ItemNameBox->setGeometry(QRect(20, 260, 113, 23));
        ItemPriceBox = new QLineEdit(centralWidget);
        ItemPriceBox->setObjectName(QString::fromUtf8("ItemPriceBox"));
        ItemPriceBox->setGeometry(QRect(360, 260, 113, 23));
        AddItemBtn = new QPushButton(centralWidget);
        AddItemBtn->setObjectName(QString::fromUtf8("AddItemBtn"));
        AddItemBtn->setGeometry(QRect(210, 320, 80, 23));
        TotalText = new QLabel(centralWidget);
        TotalText->setObjectName(QString::fromUtf8("TotalText"));
        TotalText->setGeometry(QRect(150, 390, 101, 16));
        TotalPriceText = new QLabel(centralWidget);
        TotalPriceText->setObjectName(QString::fromUtf8("TotalPriceText"));
        TotalPriceText->setGeometry(QRect(250, 390, 59, 15));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 370, 91, 17));
        SubtotalText = new QLabel(centralWidget);
        SubtotalText->setObjectName(QString::fromUtf8("SubtotalText"));
        SubtotalText->setGeometry(QRect(250, 370, 67, 17));
        ItemTypeCombo = new QComboBox(centralWidget);
        ItemTypeCombo->setObjectName(QString::fromUtf8("ItemTypeCombo"));
        ItemTypeCombo->setGeometry(QRect(210, 260, 86, 25));
        LocationCombo = new QComboBox(centralWidget);
        LocationCombo->setObjectName(QString::fromUtf8("LocationCombo"));
        LocationCombo->setGeometry(QRect(30, 80, 251, 25));
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
        label->setText(QApplication::translate("MainWindow", "Subtotal is: ", nullptr));
        SubtotalText->setText(QApplication::translate("MainWindow", "$0.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
