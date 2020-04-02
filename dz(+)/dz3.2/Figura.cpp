#include <math.h>
#include "Figura.h"
#include <iostream>
void Figura::move(float Alpha,QPainter *Painter)
{
    if ((y < 10) || (y+60 > Painter->device()->height()))
    {
        shag *= -1;
    }
    y += shag*(Alpha*0.01);
    draw(Painter);
}
void C::draw(QPainter *Painter)
{
    Painter->drawArc(x, y, 20, 20, 0, 16*180);
    Painter->drawLine(x, y+10, x,y+35);
    Painter->drawArc(x, y+25, 20, 20, 16*0, -16*180);
}
void O::draw(QPainter *Painter)
{
    Painter->drawArc(x, y, 20, 20, 0, 16*180);
    Painter->drawLine(x, y+10, x,y+35);
    Painter->drawLine(x+20, y+10, x+20,y+35);
    Painter->drawArc(x, y+25, 20, 20, 16*0, -16*180);
}
void Q::draw(QPainter *Painter)
{
    Painter->drawArc(x, y, 20, 20, 0, 16*180);
    Painter->drawLine(x, y+10, x,y+35);
    Painter->drawLine(x+20, y+10, x+20,y+35);
    Painter->drawArc(x, y+25, 20, 20, 16*0, -16*180);
    Painter->drawLine(x+18, y+35, x+22,y+40);
}
