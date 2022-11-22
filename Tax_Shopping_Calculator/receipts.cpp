#include "receipts.h"
#include "ui_receipts.h"

Receipts::Receipts(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Receipts)
{
    ui->setupUi(this);
}

Receipts::~Receipts()
{
    delete ui;
}
