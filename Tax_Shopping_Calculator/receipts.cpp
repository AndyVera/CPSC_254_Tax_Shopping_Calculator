#include "receipts.h"
#include "ui_receipts.h"


QString receiptpath = "Receipts/";
Receipts::Receipts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Receipts)
{

    ui->setupUi(this);
    ui->ReceiptList->hide();
}

Receipts::~Receipts()
{
    delete ui;
}

void Receipts::on_ShowReceipts_clicked()
{
    ui->NoReceiptsFound->hide();

    QDir directpath(receiptpath);

    if (!directpath.exists()){
        QMessageBox errormessage;
        errormessage.critical(this, tr("Error"), tr("Directory Not Found"));
    }

    QList <QFileInfo> allreceipts = directpath.entryInfoList();

    for (int i = 1; i < allreceipts.size(); i++){
        //ui->ReceiptList->addItem(allreceipts.at(i).completeBaseName());
        ui->ReceiptList->addItem(allreceipts.at(i).baseName());
    }

    ui->ReceiptList->show();
}


void Receipts::on_SelectReceipt_clicked()
{
    QString chosenReceipt = ui->ReceiptList->currentText();

    if (chosenReceipt == ".." || chosenReceipt == ""){
        QMessageBox receipterror;
        receipterror.critical(this, tr("Receipt Fetching"), tr("Select a valid receipt"));
    }

    QString fullpathreceipt = receiptpath + chosenReceipt;
    QFile receipttxt (fullpathreceipt);

    if(!receipttxt.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::critical(this, tr("Reading File"), tr("File does not exist"));
    }

    QTextStream input(&receipttxt);
    QString receiptinput = input.readAll();
    //qDebug() << receiptinput;
    QMessageBox::information(this, tr("Reciept"), tr(receiptinput.toLatin1().data()));

    receipttxt.close();
}


void Receipts::on_findfromfs_clicked()
{
    QString filepath = QFileDialog::getOpenFileName(this, "Open a File", "/home/");
    QMessageBox::information(this, "...", filepath);

    QFile file(filepath);

    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this, "title", "File did not open!");
    }

    QTextStream in (&file);
    QString text = in.readAll();

    const char* printItemList = text.toLatin1().data();
    QMessageBox::information(this, tr("Item List"), tr(printItemList));


    file.close();
}

