#include "login.h"
#include "ui_login.h"


using namespace std;

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_login_push_clicked()
{
    QString filename = "accountInfo";
    QString foldername = "Account/";

    QString tempath = foldername + filename +".txt";

    QFile transfile(tempath);
    if(!transfile.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::critical(this, tr("Save Transaction"), tr("Could not Open File"));
        qDebug() << "Error in Opening the File";
        return;
    }

    QTextStream output(&transfile);

    QString username = ui->user_line->text();
    QString password = ui->password_line->text();
    QString read1 = output.readLine();
    QString read2 = output.readLine();

    if(username == read1 && password == read2){
        //QMessageBox::information(this, "Login", "Username and password is correct");
        hide();
        main = new MainWindow(this);
        main->show();
    }
    else{
        QMessageBox::warning(this, "Login", "Username and password is not correct");
    }
}

//user goes back to login page and submits text in line
void login::on_submit_createAcc_clicked()
{

    QString username,password;
    username = ui->user_line_2->text();
    password = ui->pass_line->text();

    QString filename = "accountInfo";
    QString foldername = "Account/";
    QDir dir;

    if(!dir.exists(foldername)){
        dir.mkpath(foldername);
    }

    QString tempath = foldername + filename +".txt";

    QFile transfile(tempath);
    if(!transfile.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::critical(this, tr("Save Transaction"), tr("Could not Open File"));
        qDebug() << "Error in Opening the File";
        return;
    }

    QTextStream output(&transfile);

    output << username << "\n";
    output << password;

    QMessageBox::information(this, tr("Account Creation"),tr("Account Successfully Created!"));

    ui->stackedWidget->setCurrentIndex(0);
}

//User is prompted to create account page
void login::on_createacc_push_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}





