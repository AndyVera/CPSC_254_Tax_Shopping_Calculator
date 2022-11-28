#ifndef RECEIPTS_H
#define RECEIPTS_H

#include <QDialog>
#include <QString>
#include <QDir>
#include <QDebug>
#include <QMessageBox>
#include <QFile>
#include <string.h>
#include "string"
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <string>


namespace Ui {
class Receipts;
}

class Receipts : public QDialog
{
    Q_OBJECT

public:
    explicit Receipts(QWidget *parent = nullptr);
    ~Receipts();

private slots:
    void on_ShowReceipts_clicked();

    void on_SelectReceipt_clicked();

    void on_findfromfs_clicked();

private:
    Ui::Receipts *ui;
};

#endif // RECEIPTS_H
