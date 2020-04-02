/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_11;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *table;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_10;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_6;
    QSpacerItem *verticalSpacer_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(839, 453);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setLayoutDirection(Qt::LeftToRight);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout->addWidget(lineEdit_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_4);

        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout->addWidget(lineEdit_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_5);

        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout->addWidget(lineEdit_5);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_11);


        horizontalLayout_3->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        table = new QTableWidget(centralWidget);
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
        if (table->rowCount() < 10)
            table->setRowCount(10);
        table->setObjectName(QString::fromUtf8("table"));
        table->setMinimumSize(QSize(541, 0));
        table->setRowCount(10);

        verticalLayout_2->addWidget(table);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_8);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_10);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setMaximumSize(QSize(200, 16777215));
        lineEdit_6->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_6);


        verticalLayout_2->addLayout(horizontalLayout_2);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_9);


        horizontalLayout_3->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        table->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        lineEdit_6->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\255\321\202\320\260\320\266", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\321\214", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\321\202\320\270\321\202\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\320\255\321\202\320\260\320\266", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 \320\272\320\276\320\274\320\275\320\260\321\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\320\237\320\273\320\276\321\211\320\260\320\264\321\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\320\246\320\265\320\275\320\260", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\200\320\270\321\201\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\272\320\262\320\260\321\200\321\202\320\270\321\200\321\213 \320\277\320\276 \321\207\320\270\321\201\320\273\321\203 \320\272\320\276\320\274\320\275\320\260\321\202 \320\270 \320\277\320\273\320\276\321\211\320\260\320\264\320\270", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\277\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \320\272\320\276\320\273-\320\262\320\276 \320\272\320\262 \320\275\320\260 \321\215\321\202\320\260\320\266\320\265", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\241\321\200 \321\201\321\202\320\276\320\270\320\274\320\276\321\201\321\202\321\214 \320\274:2 \320\275\320\260 \320\264\320\260\320\275\320\275\320\276\320\274 \321\215\321\202\320\260\320\266\320\265", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
