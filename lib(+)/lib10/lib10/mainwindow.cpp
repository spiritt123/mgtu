#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sets.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ns = new NewSets();
}

void MainWindow::Draw()
{
    ui->textEdit->clear();
    std::vector<number> vc;
    vc = ns->Vec();
    for (int i = 0; i < vc.size(); ++i)
    {
        QString str;
        if (vc[i].is_int == true)
        {
            str = QString::number(vc[i].value_int);
        }
        else
        {
            str = QString::number(vc[i].value_double);
        }

        ui->textEdit->append(str);
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ns->Add(ui->spinBox->text().toInt());
    Draw();
}

void MainWindow::on_pushButton_2_clicked()
{
    ns->Add(ui->doubleSpinBox->value());
    Draw();
}

void MainWindow::on_pushButton_3_clicked()
{
    ns->Delete(ui->spinBox->text().toInt());
    Draw();
}

void MainWindow::on_pushButton_4_clicked()
{
    ns->Delete(ui->doubleSpinBox->value());
    Draw();
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->lineEdit->setText(QString::number(ns->Sred()));
}

void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox msgBox;
    if (ns->IsBelong(ui->spinBox->text().toInt()))
    {
        msgBox.setText("Yes");
    }
    else msgBox.setText("No");
    msgBox.exec();
}

void MainWindow::on_pushButton_7_clicked()
{
    QMessageBox msgBox;
    if (ns->IsBelong(ui->doubleSpinBox->value()))
    {
        msgBox.setText("Yes");
    }
    else msgBox.setText("No");
    msgBox.exec();
}