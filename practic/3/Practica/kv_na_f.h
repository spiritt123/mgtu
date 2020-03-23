#ifndef KV_NA_F_H
#define KV_NA_F_H

#include <QDialog>

namespace Ui {
class Kv_na_f;
}

class Kv_na_f : public QDialog
{
    Q_OBJECT

public:
    explicit Kv_na_f(QWidget *parent = 0);
    ~Kv_na_f();


private:
    Ui::Kv_na_f *ui;
};

#endif // KV_NA_F_H
