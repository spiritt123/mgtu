#include "kv_na_f.h"
#include "ui_kv_na_f.h"
#include "bookfile.h"
#include <QMessageBox>

Kv_na_f::Kv_na_f(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Kv_na_f)
{
    ui->setupUi(this);

    connect(ui->ExitKv, SIGNAL(clicked(bool)),this,SLOT(close()));

    int k = 0;
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
        if (book.r.floor > k) k = book.r.floor;

        int i=0;
        while (book.readRec())
        {
            if (book.r.floor > k) k = book.r.floor;
        }
    }
    book.~bookFile();
    int *arr = new int[k];
    for (int i = 0; i < k; ++i)
    {
        arr[i] = 0;
    }
    bookFile book2;
    if (!book2.readRec())
    {
        QMessageBox msg(QMessageBox::Critical,
                        ("Íåò äàííûõ"),
                        ("Áàçà ïóñòà"),
                        QMessageBox::Ok,0);
    }
    else
    {
        ++arr[book2.r.floor-1];
        int i=0;
        while (book2.readRec())
        {
            ++arr[book2.r.floor-1];
        }
    }
    ui->tableWidget->setRowCount(k);
    for (int i = 0; i < k; ++i)
    {
        QTableWidgetItem *item;
        item = new QTableWidgetItem();
        item->setFlags(Qt::NoItemFlags);
        item->setText(QString::number(arr[i]));
        ui->tableWidget->setItem(i,0,item);
    }
    book2.~bookFile();
}

Kv_na_f::~Kv_na_f()
{
    delete ui;
}
