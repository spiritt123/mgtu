#include "Player.h"

Player::Player()
{
    _x = 0;
    _y = 0;
    _radius = 21;
    _id = 0;
    _speed = 10;
}


Player::~Player()
{
    delete _socket;
}

float getLenghtWith2Object(sf::Vector2f first, float first_radius, 
                 sf::Vector2f second, float second_radius)
{
    float offset = first_radius - second_radius;
    return sqrt((first.x - second.x + offset) * (first.x - second.x + offset) +
                (first.y - second.y + offset) * (first.y - second.y + offset));
}

void Player::correctPositionAboutBounds(float radiusMap)
{
    float lenght = getLenghtWith2Object(getPosition(), getRadius(), sf::Vector2f(0, 0), 0);
    if (lenght > radiusMap)
    {
        _x = _x * radiusMap / lenght; 
        _y = _y * radiusMap / lenght; 
    }
}


void Player::moveTo(float x, float y, float radiusMap)
{
    setPosition(_x + x * _speed + _radius, _y + y * _speed + _radius);   
    correctPositionAboutBounds(radiusMap);
}


void Player::setId(int id)
{
    _id = id;
}

int Player::getId()
{
    return _id;
}


//I know you could have written it better.
void Player::tryToEatAFood(std::list<Object*> *food)
{
    for (std::list<Object*>::iterator it = food->begin(); 
        it!=food->end();)
    {
        if (getLenghtWith2Object((*it)->getPosition(), (*it)->getRadius(),
                       getPosition(), getRadius()) < _radius)
        {
            setRadius(sqrt(getRadius()*getRadius() + (*it)->getRadius()*(*it)->getRadius()));
            _speed = 10 / log2(_radius / 10);
            it = food->erase(it);
        }
        else
        {
            ++it;
        }
    }
}

void Player::tryToEatAPlayers(std::list<Player*> *food, int id)
{
    for (std::list<Player*>::iterator it = food->begin(); 
        it!=food->end();)
    {
        if ((getLenghtWith2Object((*it)->getPosition(), (*it)->getRadius(),
            getPosition(), getRadius()) < _radius) && (id != (*it)->getId()))
        {
            setRadius(getRadius() + 1);
            (*it)->getSocket()->disconnect();
            _speed = 10 / log2(_radius / 10);
            it = food->erase(it);
        }
        else
        {
            ++it;
        }
    }
}

void Player::connect(sf::TcpSocket *socket)
{
    _socket = socket;
}

sf::TcpSocket* Player::getSocket()
{
    return _socket;
}
