#include "Object.h"

Object::Object(){}

Object::~Object(){}


void Object::setPosition(float x, float y)
{
    _x = x - _radius;
    _y = y - _radius;
    _color = {rand()%255, rand()%255, rand()%255};
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

Color Object::getColor()
{
    return _color;
}

