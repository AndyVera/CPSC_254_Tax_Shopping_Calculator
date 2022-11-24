/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QStackedWidget *stackedWidget;
    QWidget *login_page;
    QPushButton *login_push;
    QPushButton *createacc_push;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *user;
    QLineEdit *user_line;
    QHBoxLayout *horizontalLayout;
    QLabel *password;
    QLineEdit *password_line;
    QWidget *createAcc_page;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *user_label;
    QLineEdit *user_line_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *pass_label_2;
    QLineEdit *pass_line;
    QPushButton *submit_createAcc;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        stackedWidget = new QStackedWidget(login);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(80, 70, 291, 191));
        login_page = new QWidget();
        login_page->setObjectName(QString::fromUtf8("login_page"));
        login_push = new QPushButton(login_page);
        login_push->setObjectName(QString::fromUtf8("login_push"));
        login_push->setGeometry(QRect(90, 130, 80, 24));
        createacc_push = new QPushButton(login_page);
        createacc_push->setObjectName(QString::fromUtf8("createacc_push"));
        createacc_push->setGeometry(QRect(60, 160, 141, 24));
        layoutWidget = new QWidget(login_page);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 171, 62));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        user = new QLabel(layoutWidget);
        user->setObjectName(QString::fromUtf8("user"));

        horizontalLayout_2->addWidget(user);

        user_line = new QLineEdit(layoutWidget);
        user_line->setObjectName(QString::fromUtf8("user_line"));

        horizontalLayout_2->addWidget(user_line);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        password = new QLabel(layoutWidget);
        password->setObjectName(QString::fromUtf8("password"));

        horizontalLayout->addWidget(password);

        password_line = new QLineEdit(layoutWidget);
        password_line->setObjectName(QString::fromUtf8("password_line"));

        horizontalLayout->addWidget(password_line);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(login_page);
        createAcc_page = new QWidget();
        createAcc_page->setObjectName(QString::fromUtf8("createAcc_page"));
        layoutWidget1 = new QWidget(createAcc_page);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 20, 261, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        user_label = new QLabel(layoutWidget1);
        user_label->setObjectName(QString::fromUtf8("user_label"));

        horizontalLayout_3->addWidget(user_label);

        user_line_2 = new QLineEdit(layoutWidget1);
        user_line_2->setObjectName(QString::fromUtf8("user_line_2"));

        horizontalLayout_3->addWidget(user_line_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pass_label_2 = new QLabel(layoutWidget1);
        pass_label_2->setObjectName(QString::fromUtf8("pass_label_2"));

        horizontalLayout_4->addWidget(pass_label_2);

        pass_line = new QLineEdit(layoutWidget1);
        pass_line->setObjectName(QString::fromUtf8("pass_line"));

        horizontalLayout_4->addWidget(pass_line);


        verticalLayout_2->addLayout(horizontalLayout_4);

        submit_createAcc = new QPushButton(createAcc_page);
        submit_createAcc->setObjectName(QString::fromUtf8("submit_createAcc"));
        submit_createAcc->setGeometry(QRect(90, 150, 80, 24));
        label = new QLabel(createAcc_page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 241, 16));
        stackedWidget->addWidget(createAcc_page);
        label_2 = new QLabel(login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 30, 141, 17));
        label_3 = new QLabel(login);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 280, 91, 17));

        retranslateUi(login);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", nullptr));
        login_push->setText(QApplication::translate("login", "Login", nullptr));
        createacc_push->setText(QApplication::translate("login", "Create Account", nullptr));
        user->setText(QApplication::translate("login", "Username", nullptr));
        password->setText(QApplication::translate("login", "Password", nullptr));
        user_label->setText(QApplication::translate("login", "Username", nullptr));
        pass_label_2->setText(QApplication::translate("login", "Password", nullptr));
        submit_createAcc->setText(QApplication::translate("login", "Submit", nullptr));
        label->setText(QApplication::translate("login", "Create and Submit Username and Password", nullptr));
        label_2->setText(QApplication::translate("login", "Shopping Calculator", nullptr));
        label_3->setText(QApplication::translate("login", "Verson 1.0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
