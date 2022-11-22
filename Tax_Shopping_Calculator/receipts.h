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

private:
    Ui::Receipts *ui;
};

#endif // RECEIPTS_H
