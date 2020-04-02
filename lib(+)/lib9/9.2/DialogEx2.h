#ifndef DIALOG_EX2_H
#define DIALOG_EX2_H

#include <QDialog>
#include "ui_ex2.h" 

// заголовок сгенерированный uic автоматически

class DialogEx2 : public QDialog, public Ui::Dialog
{
    Q_OBJECT
public:
    DialogEx2( QWidget * parent = 0);
private:
    void onExitClicked();
};

#endif