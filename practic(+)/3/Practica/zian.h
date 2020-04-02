#ifndef ZIAN_H
#define ZIAN_H

#include <QDialog>

namespace Ui {
class Zian;
}

class Zian : public QDialog
{
    Q_OBJECT

public:
    explicit Zian(QWidget *parent = 0);
    ~Zian();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Zian *ui;
};

#endif // ZIAN_H
