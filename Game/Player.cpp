#include "Player.h"
#include "math.h"

Player::Player()
{
    _x = 0;
    _y = 0;
    _radius = 20;
}


Player::~Player(){}



void Player::moveTo(float x, float y)
{
    float eps = 1.f; //infinitesimal
    float percentAllLenghtOffset = 0.1f;
    if (((_x - x)*(_x - x) + (_y - y)*(_y - y)) > eps)
    {
        setPosition(_x + _radius + (x - _x - _radius)*percentAllLenghtOffset, 
                    _y + _radius + (y - _y - _radius)*percentAllLenghtOffset);
    }
}

float LenghtLine(sf::Vector2f first, float first_radius, 
                 sf::Vector2f second, float second_radius)
{
    float offset = first_radius - second_radius;
    return sqrt((first.x - second.x + offset) * (first.x - second.x + offset) +
                (first.y - second.y + offset) * (first.y - second.y + offset));
}

void Player::CheckingForFood(std::vector<Object*> *food)
{
    for (int i = 0; i < food->size(); ++i)
    {
        if (LenghtLine((*food)[i]->getPosition(), (*food)[i]->getRadius(),
                       getPosition(), getRadius()) < _radius)
        {
            setRadius(getRadius() + 1);
            delete (*food)[i];
            food->erase(food->begin() + i);
        }
    }
}



