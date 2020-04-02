#include "graph.h"
#include "ui_graph.h"
#include "bookfile.h"
#include <QGraphicsTextItem>

Graph::Graph(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graph)
{
    ui->setupUi(this);
    bookFile book;
    QDataStream in(book.f);
    recType n;
    std::vector<recType> vec;
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);
    //Это как раз создана сцена. Сцена - это класс для работы с 2D графикой.
    //Теперь, раз это график, то построим координатные оси X и Y.
    QPen pen(Qt::green);//Просто выбираем цвет для карандашика


    do
    {
        in>>n.address>>n.floor>>n.Ncom>>n.S>>n.cost;
        vec.push_back(n);
    }while (!in.atEnd());

    int len = 0;
    for (int i = 0; i < vec.size(); ++i)
    {
        if (len < vec[i].floor) len = vec[i].floor;
    }

    int *arr = new int[len];
    int *a_c = new int[len];
    for (int i = 0; i < len; ++i)
    {
        arr[i] = 0;
        a_c[i] = 0;
    }
    int max;
    for (int i = 0; i < vec.size(); ++i)
    {
        arr[vec[i].floor-1] +=1;
        a_c[vec[i].floor-1] +=vec[i].cost;
    }
    int x = 0, y = 0;
    int y1= 0;
    int steph = 475/len,
        stepv = 543/20;
    for (int i = 0; i < len; ++i)
    {
        y1 = y;
        ++x;
        if (arr[i] == 0)
        {
            y = 0;
        }
        else
        {
            y = a_c[i] / arr[i];
        }
        scene->addLine(30+(x-1)*steph, 343 - y1*stepv,30+x*steph, 343 - y*stepv,pen);
        QGraphicsTextItem * io = new QGraphicsTextItem;
        io->setPos(30+(x-1)*steph, 343);
        io->setPlainText(QString::number(i));
        QGraphicsTextItem * io1 = new QGraphicsTextItem;
        io1->setPos(15, 350 - y * stepv * 1.2);
        io1->setPlainText(QString::number(y));
        scene->addItem(io);
        if (y != 0) scene->addItem(io1);
    }

    scene->addLine(30, 343 ,500, 343,pen);
    QGraphicsTextItem * io = new QGraphicsTextItem;
    io->setPos(400, 353);
    io->setPlainText("Номер этажа");
    scene->addItem(io);
    scene->addLine(30, 30 ,30, 343,pen);
    scene->addText("стоимость квартиры");
    ui->graphicsView->setScene(scene);

    connect(ui->Exit, SIGNAL(clicked(bool)),this,SLOT(close()));
}

Graph::~Graph()
{
    delete ui;
}
