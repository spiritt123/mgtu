/********************************************************************************
** Form generated from reading UI file 'kv_na_f.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KV_NA_F_H
#define UI_KV_NA_F_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Kv_na_f
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QPushButton *ExitKv;

    void setupUi(QDialog *Kv_na_f)
    {
        if (Kv_na_f->objectName().isEmpty())
            Kv_na_f->setObjectName(QString::fromUtf8("Kv_na_f"));
        Kv_na_f->resize(153, 343);
        horizontalLayout = new QHBoxLayout(Kv_na_f);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(Kv_na_f);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setRowCount(10);

        verticalLayout->addWidget(tableWidget);

        ExitKv = new QPushButton(Kv_na_f);
        ExitKv->setObjectName(QString::fromUtf8("ExitKv"));

        verticalLayout->addWidget(ExitKv);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Kv_na_f);

        QMetaObject::connectSlotsByName(Kv_na_f);
    } // setupUi

    void retranslateUi(QDialog *Kv_na_f)
    {
        Kv_na_f->setWindowTitle(QApplication::translate("Kv_na_f", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Kv_na_f", "Kol-vo kv", nullptr));
        ExitKv->setText(QApplication::translate("Kv_na_f", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Kv_na_f: public Ui_Kv_na_f {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KV_NA_F_H
