#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "receipts.h"
#include <string>
#include <array>
#include <QMessageBox>
#include <QDebug>
#include <QVector>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <QDir>
#include <QRandomGenerator>
#include <QDateTime>
#include <iomanip>


using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_LocationSubmitBtn_clicked();

    void on_AddItemBtn_clicked();

    void on_DisplayBtn_clicked();

    void on_ClearBtn_clicked();

    void on_DeleteItemBtn_clicked();

    void updateSubTransTotalViews(double tempSubTotal, double tempTranstotal);

    void on_SavelistBtn_clicked();

    void on_RecieptsBtn_clicked();

    void on_CustomTaxBtn_clicked();

private:
    Ui::MainWindow *ui;
};

double UpdateSubTotal(QVector<QString> tempnamelist, QVector<QString> temptypelist, QVector<QString>temppricelist);
double UpdateTransTotal(QVector<QString> tempnamelist, QVector<QString> temptypelist, QVector<QString>temppricelist);
string recieptCreation(QVector<QString> tempnamelist, QVector<QString> temptypelist, QVector<QString>temppricelist);

#endif // MAINWINDOW_H
