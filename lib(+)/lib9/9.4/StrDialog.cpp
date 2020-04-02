#include <QVector>
#include <QGridLayout>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTextEdit>
#include "StrDialog.h"
#include <iostream>

StrDialog::StrDialog(QWidget * parent)
{
    // Создаем форму
    m_pLineEdit = new QLineEdit(this);

    m_rTextEdit = new QTextEdit(this);
    m_rTextEdit->setReadOnly(true);
    QVBoxLayout *Layout = new QVBoxLayout();
    QPushButton *button = new QPushButton("Convert");
    
    m_rTextEdit->setSizePolicy (QSizePolicy::Expanding, QSizePolicy::Expanding);
    
    buffer = 0;

    connect(m_pLineEdit, SIGNAL(textEdited(QString)), this, SLOT(my_copy()));
    connect(button, SIGNAL(clicked()), this, SLOT(my_paste()));
    
    Layout->addWidget(m_pLineEdit);
    Layout->addWidget(button);
    Layout->addWidget(m_rTextEdit);

    setLayout(Layout);  
};

void StrDialog::my_copy()
{
    buffer = 0;
    m_rTextEdit->setText("");
    m_rTextEdit->append("input string: " + m_pLineEdit->text());
}

void StrDialog::my_paste()
{ 
    if (buffer == 0)
    {
        m_rTextEdit->append("lower string: " + m_pLineEdit->text().toLower());
        buffer = 1;
    }
    else if(buffer == 1)
    {
        m_rTextEdit->append("APPER string: " + m_pLineEdit->text().toUpper());
        buffer = 2;
    }
};