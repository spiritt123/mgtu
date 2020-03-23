#include "zian.h"
#include "ui_zian.h"
#include "bookfile.h"
#include <QMessageBox>
#include <iostream>
Zian::Zian(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Zian)
{
    ui->setupUi(this);
    connect(ui->pushButton_2, SIGNAL(clicked(bool)),this,SLOT(close()));
}

Zian::~Zian()
{
    delete ui;
}

void Zian::on_pushButton_clicked()
{

    bookFile book;
    for (int i = 0; i < ui->table->rowCount(); ++i)
    {
        for (int j = 0; j < ui->table->columnCount(); ++j)
        {
            QTableWidgetItem *item = new QTableWidgetItem;
            item->setText("");
            ui->table->setItem(i, j, item);
        }
    }
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
            QTableWidgetItem *item;
            item = new QTableWidgetItem();
            item->setFlags(Qt::NoItemFlags);
            item->setText(book.r.address);
            ui->table->setItem(i,0,item);

            item = new QTableWidgetItem();
            item->setFlags(Qt::NoItemFlags);
            item->setText(QString::number(book.r.floor));
            ui->table->setItem(i,1,item);

            item = new QTableWidgetItem();
            item->setFlags(Qt::NoItemFlags);
            item->setText(QString::number(book.r.Ncom));
            ui->table->setItem(i,2,item);

            item = new QTableWidgetItem();
            item->setFlags(Qt::NoItemFlags);
            item->setText(QString::number(book.r.S));
            ui->table->setItem(i,3,item);

            item = new QTableWidgetItem();
            item->setFlags(Qt::NoItemFlags);
            item->setText(QString::number(book.r.cost));
            ui->table->setItem(i,4,item);
            ++i;
        }
        while (book.readRec())
        {
            if ((book.r.Ncom == ui->lineEdit_2->text().toInt()) &&
                (book.r.S >= ui->lineEdit->text().toInt()) &&
                (book.r.S <= ui->lineEdit_3->text().toInt()))
            {
                QTableWidgetItem *item;
                item = new QTableWidgetItem();
                item->setFlags(Qt::NoItemFlags);
                item->setText(book.r.address);
                ui->table->setItem(i,0,item);

                item = new QTableWidgetItem();
                item->setFlags(Qt::NoItemFlags);
                item->setText(QString::number(book.r.floor));
                ui->table->setItem(i,1,item);

                item = new QTableWidgetItem();
                item->setFlags(Qt::NoItemFlags);
                item->setText(QString::number(book.r.Ncom));
                ui->table->setItem(i,2,item);

                item = new QTableWidgetItem();
                item->setFlags(Qt::NoItemFlags);
                item->setText(QString::number(book.r.S));
                ui->table->setItem(i,3,item);

                item = new QTableWidgetItem();
                item->setFlags(Qt::NoItemFlags);
                item->setText(QString::number(book.r.cost));
                ui->table->setItem(i,4,item);
                ++i;
            }
        }
    }
    book.~bookFile();
}
