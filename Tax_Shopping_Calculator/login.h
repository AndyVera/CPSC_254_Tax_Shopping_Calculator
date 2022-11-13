#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_submit_createAcc_clicked();
    void on_login_push_clicked();
    void on_createacc_push_clicked();

private:
    MainWindow *main;
    Ui::login *ui;
};

#endif // LOGIN_H
