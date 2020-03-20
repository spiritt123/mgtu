#ifndef _STR_DIALOG_H_
#define _STR_DIALOG_H_
#include <QDialog>
#include <QLineEdit>
#include <QSignalMapper>
#include <QTextEdit>
/// Класс, реализующий калькулятор
class StrDialog: public QDialog
{
    Q_OBJECT
public:
    StrDialog( QWidget * parent = 0);
    virtual ~StrDialog(){};

protected:    
    QLineEdit *m_pLineEdit;
    QTextEdit *m_rTextEdit;
    int        buffer;

    
private slots:
    void my_copy();
    void my_paste();
};
#endif