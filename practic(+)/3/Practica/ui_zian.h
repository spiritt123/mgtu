/********************************************************************************
** Form generated from reading UI file 'zian.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZIAN_H
#define UI_ZIAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Zian
{
public:
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout;
    QTableWidget *table;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Zian)
    {
        if (Zian->objectName().isEmpty())
            Zian->setObjectName(QString::fromUtf8("Zian"));
        Zian->resize(561, 451);
        horizontalLayout_5 = new QHBoxLayout(Zian);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        table = new QTableWidget(Zian);
        if (table->columnCount() < 5)
            table->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (table->rowCount() < 20)
            table->setRowCount(20);
        table->setObjectName(QString::fromUtf8("table"));
        table->setRowCount(20);

        verticalLayout->addWidget(table);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(Zian);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit_2 = new QLineEdit(Zian);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Zian);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit = new QLineEdit(Zian);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        lineEdit_3 = new QLineEdit(Zian);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(Zian);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(Zian);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout);


        retranslateUi(Zian);

        QMetaObject::connectSlotsByName(Zian);
    } // setupUi

    void retranslateUi(QDialog *Zian)
    {
        Zian->setWindowTitle(QApplication::translate("Zian", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Zian", "\320\220\320\264\321\200\320\265\321\201\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Zian", "\320\255\321\202\320\260\320\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Zian", "\320\232\320\276\320\273-\320\262\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Zian", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Zian", "\320\246\320\265\320\275\320\260", nullptr));
        label->setText(QApplication::translate("Zian", "\320\247\320\270\321\201\320\273\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        label_2->setText(QApplication::translate("Zian", "\320\224\320\270\320\260\320\277\320\276\320\267\320\276\320\275 \320\277\320\273\320\276\321\211\320\260\320\264\320\270", nullptr));
        lineEdit->setText(QApplication::translate("Zian", "\320\236\321\202", nullptr));
        lineEdit_3->setText(QApplication::translate("Zian", "\320\224\320\276", nullptr));
        pushButton->setText(QApplication::translate("Zian", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("Zian", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Zian: public Ui_Zian {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZIAN_H
