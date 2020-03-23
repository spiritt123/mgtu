#ifndef area_h
#define area_h
#include "Figura.h"
#include <QWidget>
class Area : public QWidget
{
    int myTimer; 
    float alpha; 
public:  
    Area(QWidget *parent = 0);
    ~Area();
    C *c;
    O *o;
    Q *q;
protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);
    void showEvent(QShowEvent *event);
    void hideEvent(QHideEvent *event); 
};
#endif
