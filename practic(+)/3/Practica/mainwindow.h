#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "bookfile.h"
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    void ClearTable();
    void DrawTable();
    bool CheckAllField();
    void showRow(int i,recType r);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
