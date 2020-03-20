#ifndef MAINWINDOW_H
#define MAINWINDOW_H

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

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
    struct House
    {
        QString address;
        int floor;
        int Ncom;
        int S;
        int cost;
    };
};

#endif // MAINWINDOW_H
