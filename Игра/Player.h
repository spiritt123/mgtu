#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Object.h"

class Player : public Object
{
public:
    Player();
    ~Player();

    void moveTo(float x, float y);
    
    void CheckingForFood(std::vector<Object*> *food);

    void connect();
    void sendData();

private:
    float _maxSpeed;
};


#endif//_PLAYER_H_