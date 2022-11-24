#ifndef RECEIPTS_H
#define RECEIPTS_H

#include <QDialog>

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

private:
    Ui::Receipts *ui;
};

#endif // RECEIPTS_H
