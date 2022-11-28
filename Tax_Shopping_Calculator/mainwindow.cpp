#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "receipts.h"
#include <array>
#include <QMessageBox>
#include <QDebug>
#include <QVector>
#include <vector>
#include <string>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QRandomGenerator>
#include <QDateTime>
#include <iomanip>
using namespace std;

double taxRate = 0.0;
QString inputlocation = "";

QVector <QString> CityLocations = {"Los Angeles", "Fullerton", "Anaheim", "San Diego", "Irvine", "Pasadena", "Santa Monica", "Buena Park", "Garden Grove", "Inglewood"};
QVector <QString> CityTaxRate = {"9.5", "7.75", "7.75", "7.75", "7.75", "10.25", "10.25", "7.75", "8.75", "10.00"  };
QVector<QString>itemnamelist;
QVector<QString> itemtypelist;
QVector<QString> itempricelist;
string itemlist = "There Are No Items In Cart";
float TransactionTotal = 0.00;
float SubTotal = 0.00;
QDateTime curentDateTime;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->LocationCombo->addItem("Los Angeles");
    //ui->LocationCombo->addItem("Fullerton");
    for(int i = 0; i < CityLocations.size(); i++){
        ui->LocationCombo->addItem(CityLocations[i]);
    }
    ui->LocationCombo->addItem("Custom");

    ui->ItemTypeCombo->addItem("General Merch");
    ui->ItemTypeCombo->addItem("Groceries");

    ui->CustomTaxBox->hide();
    ui->CustomTaxTxt->hide();
    ui->CustomTaxBtn->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LocationSubmitBtn_clicked()
{
    inputlocation = ui->LocationCombo->currentText();

    ui->CustomTaxTxt->hide();
    ui->CustomTaxBox->hide();
    ui->CustomTaxBtn->hide();

//    if (inputlocation == "Los Angeles") {
//        taxRate = 9.5;
//    }
//    else if (inputlocation == "Fullerton"){
//        taxRate = 7.75;
//    }
    if (inputlocation != "Custom"){
        for(int i = 0; i < CityLocations.size(); i++){
            if(inputlocation == CityLocations[i]){
                taxRate = CityTaxRate[i].toFloat();
            }
        }
    }
    else if (inputlocation == "Custom"){
        ui->CustomTaxTxt->show();
        ui->CustomTaxBox->show();
        ui->CustomTaxBtn->show();
        return;
    }

    QString strngTaxRate = QString::number(taxRate);
    ui->TaxRateShow->setText(strngTaxRate+"%");

    if (!itemnamelist.isEmpty()){
        double TransactionTotal = UpdateTransTotal(itemnamelist, itemtypelist,itempricelist);
        double SubTotal = UpdateSubTotal(itemnamelist, itemtypelist, itempricelist);
        updateSubTransTotalViews(SubTotal,TransactionTotal);
    }
}

void MainWindow::on_AddItemBtn_clicked()
{

    QString itemtype = ui->ItemTypeCombo->currentText();
    QString itemname = ui->ItemNameBox->text();

    if (taxRate != 0.00){

        itemnamelist.append(itemname);
        itemtypelist.append(itemtype);
        itempricelist.append(ui->ItemPriceBox->text());

         TransactionTotal = UpdateTransTotal(itemnamelist, itemtypelist, itempricelist);
         SubTotal = UpdateSubTotal(itemnamelist, itemtypelist, itempricelist);

        updateSubTransTotalViews(SubTotal,TransactionTotal);

        ui->ItemNameBox->setText("");
        ui->ItemPriceBox->setText("");
    }
    else if (taxRate == 0.00){
        QMessageBox messagebox;
        messagebox.critical(this,"Invalid Entry","Enter a Location First!");
    }

}

void MainWindow::on_DisplayBtn_clicked()
{
    //string itemlist;
    if(!itemnamelist.isEmpty()){
        itemlist = recieptCreation(itemnamelist, itemtypelist, itempricelist);
    }

    if(itemnamelist.isEmpty()){
        itemlist = "There Are No Items In Cart";
    }
    const char* printItemList = itemlist.c_str();
    QMessageBox::information(this, tr("Item List"), tr(printItemList));
}


void MainWindow::on_ClearBtn_clicked()
{
    itemlist = "There Are No Items In Cart";
    itemnamelist.clear();
    itempricelist.clear();
    itemtypelist.clear();

    ui->SubtotalText->setText("$0.00");
    ui->TotalPriceText->setText("$0.00");
    ui->ItemNameBox->setText("");
    ui->ItemPriceBox->setText("");
}


void MainWindow::on_DeleteItemBtn_clicked()
{
    bool itemFound = false;

    if(itemnamelist.isEmpty() && itempricelist.isEmpty() && itemtypelist.isEmpty()){
        QMessageBox::critical(this,tr("Warning"),tr("Cannot Delete Because Cart is Empty"));
    }
    else{
        QString targetname = ui->ItemNameBox->text();
        QString targettype = ui->ItemTypeCombo->currentText();
        QString targetprice = ui->ItemPriceBox->text();

        for(int i = 0; i < itemnamelist.size(); i++){
            if((itemnamelist[i] == targetname) && (itemtypelist[i] == targettype) && (itempricelist[i] == targetprice)){
                itemnamelist.remove(i);
                itempricelist.remove(i);
                itemtypelist.remove(i);
                itemFound = true;

                double newTransTotal = UpdateTransTotal(itemnamelist, itemtypelist,itempricelist);
                double newSubTotal = UpdateSubTotal(itemnamelist, itemtypelist, itempricelist);
                updateSubTransTotalViews(newSubTotal,newTransTotal);

                QMessageBox::information(this,tr("Removing Item"), tr("The Item Was Removed Successfully!"));
                break;
            }


        }

        if(itemFound == false){
            QMessageBox::critical(this,tr("Deleting An Item"), tr("Could Not Delete Item Because It\n Is Not In Cart"));
        }
    }
    ui->ItemNameBox->setText("");
    ui->ItemPriceBox->setText("");
}

double UpdateSubTotal(QVector<QString> tempnamelist, QVector<QString> temptypelist, QVector<QString>temppricelist){

    double tempSubTotal = 0.00;

    for(int i = 0; i < tempnamelist.size(); i++){

        tempSubTotal += temppricelist[i].toDouble();
    }
    return tempSubTotal;
}

double UpdateTransTotal(QVector<QString> tempnamelist, QVector<QString> temptypelist, QVector<QString>temppricelist){
    double tempTransTotal = 0.00;

    for(int i = 0; i < tempnamelist.size(); i++){
        if (temptypelist[i] == "General Merch"){
            double tax = taxRate/100;
            double taxAdded = temppricelist[i].toDouble() * tax;
            double itemtotal = temppricelist[i].toDouble() + taxAdded;
            tempTransTotal += itemtotal;
        }
        else if (temptypelist[i] == "Groceries"){
            tempTransTotal += temppricelist[i].toDouble();
        }
    }
    return tempTransTotal;
}

void MainWindow::updateSubTransTotalViews(double tempSubTotal, double tempTranstotal){

    QString strnTransTotal = QString::number(tempTranstotal, 'f', 2 );
    ui->TotalPriceText->setText("$" + strnTransTotal);
    QString strnSubTotal = QString::number(tempSubTotal, 'f', 2 );
    ui->SubtotalText->setText("$" + strnSubTotal);

}



void MainWindow::on_SavelistBtn_clicked()
{
    //int filename = (rand() % (10));
    QDateTime filename = QDateTime::currentDateTime();
    QString filenmestr = filename.toString("ddd MMMM d yyyy hh:mm:ss");
    QString foldername = "Receipts/";
    QDir dir;

    if(!dir.exists(foldername)){
        dir.mkpath(foldername);
    }


    QString tempath = foldername + filenmestr +".txt";

    QFile transfile(tempath);
    if(!transfile.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::critical(this, tr("Save Transaction"), tr("Could not Open File"));
        qDebug() << "Error in Opening the File";
        return;
    }

    QTextStream output(&transfile);
    if(!itemnamelist.isEmpty()){
        itemlist = recieptCreation(itemnamelist,itemtypelist, itempricelist);
    }

    if(itemnamelist.isEmpty()){
        itemlist = "There Are No Items In Cart";
    }
    const char* printItemList = itemlist.c_str();
    output << printItemList;
    transfile.flush();
    transfile.close();

    QMessageBox::information(this, tr("Save Transaction"), tr("Current Transaction Was Saved!"));


}


void MainWindow::on_RecieptsBtn_clicked()
{
    this->hide();
    Receipts receiptspage;
    receiptspage.setModal(true);
    receiptspage.exec();
    this->show();
}

string recieptCreation(QVector<QString> tempnamelist, QVector<QString> temptypelist, QVector<QString>temppricelist){
    curentDateTime = QDateTime::currentDateTime();
    QString strnDateTime = curentDateTime.toString("MM.dd.yyyy hh:mm:ss");

    itemlist = "";
    itemlist = itemlist + "\tTransaction Receipt\t\t\n" + "                 Date: " + strnDateTime.toStdString() + "\n\n\n";
    for(int i = 0; i < tempnamelist.size(); i++){
        itemlist += "          ";
        itemlist += tempnamelist[i].toStdString();
        itemlist += " |";
        itemlist += temptypelist[i].toStdString();
        itemlist += " |$";
        itemlist += temppricelist[i].toStdString();
        itemlist += "\n";
    }

    SubTotal = UpdateSubTotal(tempnamelist, temptypelist, temppricelist);
    TransactionTotal = UpdateTransTotal(tempnamelist,temptypelist, temppricelist);

    QString strnSubTotal = QString::number(SubTotal, 'f', 2 );
    QString strnTaxRate = QString::number(taxRate, 'f', 2 );
    QString strnTranTotal = QString::number(TransactionTotal, 'f', 2 );
    itemlist = itemlist +"\n\tSubtotal = " +strnSubTotal.toStdString()  + "\n\tTax = " + strnTaxRate.toStdString()  + "%\n\tTotal = " + strnTranTotal.toStdString() ;

    return itemlist;
}

void MainWindow::on_CustomTaxBtn_clicked()
{
    QString customtax = ui->CustomTaxBox->text();
    taxRate = customtax.toDouble();

    QString strngTaxRate = QString::number(taxRate);
    ui->TaxRateShow->setText(strngTaxRate+"%");

    if (!itemnamelist.isEmpty()){
        double TransactionTotal = UpdateTransTotal(itemnamelist, itemtypelist,itempricelist);
        double SubTotal = UpdateSubTotal(itemnamelist, itemtypelist, itempricelist);
        updateSubTransTotalViews(SubTotal,TransactionTotal);
    }

}

