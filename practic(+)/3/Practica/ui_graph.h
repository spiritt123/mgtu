/********************************************************************************
** Form generated from reading UI file 'graph.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPH_H
#define UI_GRAPH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Graph
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QPushButton *Exit;

    void setupUi(QDialog *Graph)
    {
        if (Graph->objectName().isEmpty())
            Graph->setObjectName(QString::fromUtf8("Graph"));
        Graph->resize(563, 528);
        horizontalLayout = new QHBoxLayout(Graph);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicsView = new QGraphicsView(Graph);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        Exit = new QPushButton(Graph);
        Exit->setObjectName(QString::fromUtf8("Exit"));

        verticalLayout->addWidget(Exit);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(Graph);

        QMetaObject::connectSlotsByName(Graph);
    } // setupUi

    void retranslateUi(QDialog *Graph)
    {
        Graph->setWindowTitle(QApplication::translate("Graph", "Dialog", nullptr));
        Exit->setText(QApplication::translate("Graph", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Graph: public Ui_Graph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPH_H
