#ifndef figura_h
#define figura_h
#include <QPainter>
class Figura 
{  
protected:
    int x,y,shag;
    virtual void draw(QPainter *Painter)=0;
public:  
    Figura(int X,int Y,int Shag):x(X),y(Y),shag(Shag){}
    void move(float Alpha,QPainter *Painter);
};
class C : public Figura
{
protected:
    void draw(QPainter *Painter);
public: 
    C(int x,int y,int shag):Figura(x,y,shag){}
};

class O: public Figura
{
protected:
    void draw(QPainter *Painter);
public: 
    O(int x,int y,int shag):Figura(x,y,shag){}
};

class Q : public Figura
{
protected:
    void draw(QPainter *Painter);
public: 
    Q(int x,int y,int shag):Figura(x,y,shag){}
};

#endif
