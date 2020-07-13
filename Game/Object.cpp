#include "Object.h"

Object::Object()
{
    _color = {rand()%255, rand()%255, rand()%255};
}

Object::~Object(){}


void Object::setPosition(float x, float y)
{
    _x = x - _radius;
    _y = y - _radius;
}

sf::Vector2f Object::getPosition()
{
    return sf::Vector2f(_x, _y);
}


void Object::setRadius(float radius)
{
    _radius = radius;
}

float Object::getRadius()
{
    return _radius;
}

void Object::setColor(int r, int g, int b)
{
    _color = {r, g, b};
}

Color Object::getColor()
{
    return _color;
}


