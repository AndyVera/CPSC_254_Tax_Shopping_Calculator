/********************************************************************************
** Form generated from reading UI file 'receipts.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPTS_H
#define UI_RECEIPTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Receipts
{
public:
    QLabel *label;

    void setupUi(QDialog *Receipts)
    {
        if (Receipts->objectName().isEmpty())
            Receipts->setObjectName(QString::fromUtf8("Receipts"));
        Receipts->resize(400, 300);
        label = new QLabel(Receipts);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 110, 67, 17));

        retranslateUi(Receipts);

        QMetaObject::connectSlotsByName(Receipts);
    } // setupUi

    void retranslateUi(QDialog *Receipts)
    {
        Receipts->setWindowTitle(QApplication::translate("Receipts", "Dialog", nullptr));
        label->setText(QApplication::translate("Receipts", "Testing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Receipts: public Ui_Receipts {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPTS_H
