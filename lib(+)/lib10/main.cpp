
#include <iostream>
#include <vector>
#include "set.h"


#include "DialogEx2.h"
#include <QApplication>
#include <QSplitter>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    
    QSplitter *splitter = new QSplitter(Qt::Vertical);
    DialogEx2 *dialog1 = new DialogEx2();
    DialogEx2 *dialog2 = new DialogEx2();
    splitter->addWidget( dialog1 );
    splitter->addWidget( dialog2 );
    splitter->show(); // отображаем окно
    return app.exec(); // запускаем цикл обработки сообщений
}
/*
int main()
{
    NewSets a;
    a.Add(5.1);
    a.Add(5);
    a.Add(6);
    a.Add(6.2);
    a.Delete(6.2);
    std::cout << a.Sred() << "\n";
    a.Print();
    return 0;
}*/