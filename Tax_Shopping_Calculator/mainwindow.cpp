#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <array>
using namespace std;

double taxRate = 0.0;
QString inputlocation = "";
QString SetLocations[2] = {"Los Angeles", "Fullerton"};
double TransactionTotal = 0.0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LocationSubmitBtn_clicked()
{
    inputlocation = ui->LocationInput->text();
    if (inputlocation == "Los Angeles") {
        taxRate = 9.5;
    }
    else if (inputlocation == "Fullerton"){
        taxRate = 7.75;
    }

    QString strngTaxRate = QString::number(taxRate);
    ui->TaxRateShow->setText(strngTaxRate);
}

void MainWindow::on_AddItemBtn_clicked()
{
    QString itemname = ui->ItemNameBox->text();
    QString itemtype = ui->ItemTypeBox->text();
    double itemprice = ui->ItemPriceBox->text().toDouble();

    if (taxRate != 0.00){
        if (itemtype == "GM"){
            double tax = taxRate/100;
            double taxAdded = itemprice * tax;
            double itemtotal = itemprice + taxAdded;
            TransactionTotal += itemtotal;
        }
        else if (itemtype == "GR"){
            TransactionTotal += itemprice;
        }
    }

    QString strnTransTotal = QString::number(TransactionTotal);
    ui->TotalPriceText->setText(strnTransTotal);

}
