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

void bookFile::Delete(recType r)
{
    QDataStream in(f);
    recType n;
    std::vector<recType> vec;

    do
    {
        in>>n.address>>n.floor>>n.Ncom>>n.S>>n.cost;
        if(!((n.address == r.address) &&
           (n.floor   == r.floor  ) &&
           (n.Ncom    == r.Ncom   ) &&
           (n.S       == r.S      )&&
           (n.cost    == r.cost   )))
        {
            vec.push_back(n);
        }
    }while (!in.atEnd());

    f->close();
    f->open(QIODevice::WriteOnly);
    QDataStream out(f);
    f->resize(0);
    for (int i = 0; i < vec.size(); ++i)
    {
        out << vec[i].address << vec[i].floor << vec[i].Ncom << vec[i].S << vec[i].cost;
    }
    f->close();
    f->open(QFile::ReadWrite);
}
