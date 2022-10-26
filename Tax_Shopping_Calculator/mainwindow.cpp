#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <array>
#include <QMessageBox>
using namespace std;

double taxRate = 0.0;
QString inputlocation = "";
QString SetLocations[2] = {"Los Angeles", "Fullerton"};
double TransactionTotal = 0.0;
double Subtotal = 0.00;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->LocationCombo->addItem("Los Angeles");
    ui->LocationCombo->addItem("Fullerton");
    ui->ItemTypeCombo->addItem("GM");
    ui->ItemTypeCombo->addItem("GR");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LocationSubmitBtn_clicked()
{
    inputlocation = ui->LocationCombo->currentText();
    if (inputlocation == "Los Angeles") {
        taxRate = 9.5;
    }
    else if (inputlocation == "Fullerton"){
        taxRate = 7.75;
    }

    QString strngTaxRate = QString::number(taxRate);
    ui->TaxRateShow->setText(strngTaxRate+"%");
}

void MainWindow::on_AddItemBtn_clicked()
{
    //QString itemname = ui->ItemNameBox->text();
    QString itemtype = ui->ItemTypeCombo->currentText();
    double itemprice = ui->ItemPriceBox->text().toDouble();

    if (taxRate != 0.00){
        if (itemtype == "GM"){
            double tax = taxRate/100;
            double taxAdded = itemprice * tax;
            double itemtotal = itemprice + taxAdded;
            TransactionTotal += itemtotal;
            Subtotal += itemprice;
        }
        else if (itemtype == "GR"){
            TransactionTotal += itemprice;
            Subtotal += itemprice;
        }
        QString strnTransTotal = QString::number(TransactionTotal, 'f', 2 );
        ui->TotalPriceText->setText("$" + strnTransTotal);
        QString strnSubTotal = QString::number(Subtotal, 'f', 2 );
        ui->SubtotalText->setText("$" + strnSubTotal);
    }

    else if (taxRate == 0.00){
        QMessageBox messagebox;
        messagebox.critical(0,"Invalid Entry","Enter a Location First!");
    }
}
