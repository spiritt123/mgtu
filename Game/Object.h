#ifndef _OBJECT_H_
#define _OBJECT_H_

#include <iostream>
#include <SFML/Graphics.hpp>

struct Color
{
    int r, g, b;
};

class Object
{
public:
    Object();
    ~Object();

    void setPosition(float x, float y);
    sf::Vector2f getPosition();

    void setRadius(float radius);
    float getRadius();

    Color getColor();

protected:
    float _x;
    float _y;
    float _radius; 
    Color _color;
};


#endif//_OBJECT _H_