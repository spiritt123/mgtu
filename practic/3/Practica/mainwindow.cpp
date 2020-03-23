#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "graph.h"
#include "ui_graph.h"
#include "bookfile.h"
#include "ui_kv_na_f.h"
#include "kv_na_f.h"
#include "ui_zian.h"
#include "zian.h"
#include <QErrorMessage>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ClearTable()
{
    for (int i = 0; i < ui->table->rowCount(); ++i)
    {
        for (int j = 0; j < ui->table->columnCount(); ++j)
        {
            QTableWidgetItem *item = new QTableWidgetItem;
            item->setText("");
            ui->table->setItem(i, j, item);
        }
    }
}
void MainWindow::showRow(int i,recType r)
{
    QTableWidgetItem *item;
    item = new QTableWidgetItem();
    item->setFlags(Qt::NoItemFlags);
    item->setText(r.address);
    ui->table->setItem(i,0,item);

    item = new QTableWidgetItem();
    item->setFlags(Qt::NoItemFlags);
    item->setText(QString::number(r.floor));
    ui->table->setItem(i,1,item);

    item = new QTableWidgetItem();
    item->setFlags(Qt::NoItemFlags);
    item->setText(QString::number(r.Ncom));
    ui->table->setItem(i,2,item);

    item = new QTableWidgetItem();
    item->setFlags(Qt::NoItemFlags);
    item->setText(QString::number(r.S));
    ui->table->setItem(i,3,item);

    item = new QTableWidgetItem();
    item->setFlags(Qt::NoItemFlags);
    item->setText(QString::number(r.cost));
    ui->table->setItem(i,4,item);
}

void MainWindow::DrawTable()
{
    ClearTable();
    bookFile book;
    if (!book.readRec())
    {
        (new QErrorMessage(this))->showMessage("File not found!");
    }
    else
    {
        showRow(0,book.r);
        int i=0;
        while (book.readRec())
        {
            showRow(++i,book.r);
        }
    }
}

bool MainWindow::CheckAllField()
{
    if (ui->lineEdit->text() == "") return false;
    if (ui->lineEdit_2->text() == "") return false;
    if (ui->lineEdit_3->text() == "") return false;
    if (ui->lineEdit_4->text() == "") return false;
    if (ui->lineEdit_5->text() == "") return false;
    return true;
}

void MainWindow::on_pushButton_clicked()
{
    if (CheckAllField() == true)
    {
        bookFile book;
        recType r;
        r.address = ui->lineEdit->text();
        r.floor   = ui->lineEdit_2->text().toInt();
        r.Ncom    = ui->lineEdit_3->text().toInt();
        r.S       = ui->lineEdit_4->text().toInt();
        r.cost    = ui->lineEdit_5->text().toInt();

        book.addRec(r);
        book.~bookFile();

        ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");
        ui->lineEdit_4->setText("");
        ui->lineEdit_5->setText("");

        DrawTable();
    }
    else
    {
        (new QErrorMessage(this))->showMessage("Input all field");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    bookFile book;
    if (!book.readRec())
    {
        QMessageBox msg(QMessageBox::Critical,
                        ("Íåò äàííûõ"),
                        ("Áàçà ïóñòà"),
                        QMessageBox::Ok,0);
    }
    else
    {

        int i=0;
        if ((book.r.floor == ui->lineEdit_2->text().toInt()) &&
            (book.r.S >= ui->lineEdit->text().toInt()) &&
            (book.r.S <= ui->lineEdit_3->text().toInt()))
        {
            ++i;
        }
        while (book.readRec())
        {

        }
    }
    book.~bookFile();


    DrawTable();
}

void MainWindow::on_pushButton_7_clicked()
{
    DrawTable();
}

void MainWindow::on_pushButton_6_clicked()
{
    Graph *graph = new Graph;
    graph->show();
}

void MainWindow::on_pushButton_5_clicked()
{

    bookFile book;
    if (!book.readRec() || (ui->lineEdit_3->text() == ""))
    {
        (new QErrorMessage(this))->showMessage("Error!");
    }
    else
    {
        int sum = 0, k = 0;
        if (book.r.Ncom == (ui->lineEdit_3->text()).toInt())
        {
            sum += book.r.S;
            ++k;
        }
        int i=0;
        while (book.readRec())
        {
            if (book.r.Ncom == (ui->lineEdit_3->text()).toInt())
            {
                sum += book.r.S;
                ++k;
            }
        }
        ui->lineEdit_6->setText(QString::number((double)sum/(double)k));
    }

}

void MainWindow::on_pushButton_4_clicked()
{
    Kv_na_f *Kv = new Kv_na_f();
    Kv->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    Zian *z = new Zian();
    z->show();
}
