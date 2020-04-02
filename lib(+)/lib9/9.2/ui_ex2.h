/********************************************************************************
** Form generated from reading UI file 'ex2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EX2_H
#define UI_EX2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QDial *dial;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(462, 390);
        verticalLayout_4 = new QVBoxLayout(Dialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        textEdit = new QTextEdit(Dialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout_2->addWidget(textEdit);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dial = new QDial(Dialog);
        dial->setObjectName(QString::fromUtf8("dial"));

        verticalLayout->addWidget(dial);

        spinBox = new QSpinBox(Dialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout_3->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Dialog);
        QObject::connect(pushButton, SIGNAL(clicked()), Dialog, SLOT(reject()));
        QObject::connect(spinBox, SIGNAL(valueChanged(QString)), textEdit, SLOT(append(QString)));
        QObject::connect(dial, SIGNAL(valueChanged(int)), dial, SLOT(setValue(int)));
        QObject::connect(dial, SIGNAL(sliderMoved(int)), spinBox, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("Dialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EX2_H
