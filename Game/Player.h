#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <iostream>
#include <list>
#include "math.h"

#include "Object.h"

class Player : public Object
{
public:
    Player();
    ~Player();

    void moveTo(float x, float y, float radiusMap);

    void setId(int id);
    int getId();
    
    void tryToEatAFood(std::list<Object*> *food);
    void tryToEatAPlayers(std::list<Player*> *food, int id);

    void connect(sf::TcpSocket *socket);
    sf::TcpSocket* getSocket();

private:
    void correctPositionAboutBounds(float radiusMap);

private:
    int _id;
    float _speed;
    sf::TcpSocket *_socket;
};


#endif//_PLAYER_H_