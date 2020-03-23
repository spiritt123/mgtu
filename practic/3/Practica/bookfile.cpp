#include "bookfile.h"
#include <QMessageBox>
#include <iostream>


bookFile::bookFile()
{
    f=new QFile("book.txt");
    if(!f->exists())
    {
        QMessageBox msg(QMessageBox::Critical,
                        ("Íåò äàííûõ"),
                        ("Áàçà ïóñòà"),
                        QMessageBox::Ok,0);
    }
    f->open(QFile::ReadWrite);
}
bookFile::~bookFile()
{
    f->close();
    //delete f;
}
bool bookFile::addRec(recType r)
{
    f->seek(f->size());
    QDataStream out(f);
    out<<r.address<<r.floor<<r.Ncom<<r.S<<r.cost;
    return true;
}
bool bookFile::readRec()
{
    QDataStream in(f);
    if (in.atEnd())
    {
        in>>r.address>>r.floor>>r.Ncom>>r.S>>r.cost;
        return false;
    }
    else
    {
        in>>r.address>>r.floor>>r.Ncom>>r.S>>r.cost;
        return true;
    }
}
