#include "Area.h"
#include <QTimerEvent>
Area::Area(QWidget *parent):QWidget(parent)
{
	setFixedSize(QSize(300,200));
	c=new C(20,100,50);
    o=new O(60,100,10);
    q=new Q(100,100,80);
	alpha=10;
}
void Area::showEvent(QShowEvent *) 
{ 
    myTimer=startTimer(100);           
}
void Area::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPen pen;  // creates a default pen

    pen.setWidth(3);
    pen.setBrush(Qt::green);

    painter.setPen(pen);
    c->move(alpha,&painter);
    o->move(alpha,&painter);
    q->move(alpha,&painter);
}
void Area::timerEvent(QTimerEvent *event) 
{ 
    if (event->timerId() == myTimer) 
    {
       update();                     
    }
    else 
       QWidget::timerEvent(event); 
}

void Area::hideEvent(QHideEvent *) 
{ 
	killTimer(myTimer);             
}
Area::~Area()
{ 
    delete c;
    delete o;
    delete q;
}
