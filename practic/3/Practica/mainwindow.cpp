#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <iostream>
#include <QErrorMessage>

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


void MainWindow::DrawTable()
{
    ClearTable();
    std::fstream fin("File.txt", std::ios_base::binary | std::ios_base::in);
    if(!fin)
    {
        (new QErrorMessage(this))->showMessage("File not found!");
    }
    int i = 0;
    while(!fin.eof())
    {
        House buffer;
        fin >> buffer.address;

        QTableWidgetItem *item = new QTableWidgetItem;
        item->setText(buffer.address);
        ui->table->setItem(i, 0, item);
        if(i>30) break;
        ++i;
        std::cout<<i<<"\n";
    }
    fin.close();
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
        House *buffer = new House;
        buffer->address = ui->lineEdit->text();
        buffer->floor   = ui->lineEdit_2->text().toInt();
        buffer->Ncom    = ui->lineEdit_3->text().toInt();
        buffer->S       = ui->lineEdit_4->text().toInt();
        buffer->cost    = ui->lineEdit_5->text().toInt();

        std::ofstream fout("File.txt", std::ios::binary);
        if(!fout)
        {
            (new QErrorMessage(this))->showMessage("File not found!");
        }
        fout << buffer->address;
        fout.close();

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
//QString::number();

void MainWindow::on_pushButton_2_clicked()
{
    //d
}

void MainWindow::on_pushButton_7_clicked()
{
    DrawTable();
}
