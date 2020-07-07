#ifndef _OBJECT_H_
#define _OBJECT_H_
#include <iostream>
#include <SFML/Graphics.hpp>



class Object
{
public:
    Object();
    ~Object();

    void setPosition(float x, float y);
    sf::Vector2f getPosition();

    void setRadius(float radius);
    float getRadius();

protected:
    float _x;
    float _y;
    float _radius; 

private:
    //std::vector<food> foods;
};


#endif//_OBJECT _H_