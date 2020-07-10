#pragma once

#include "SFML/Network.hpp"

#include <list>
#include "unistd.h"

#include "Object.h" 
#include "Player.h" 

class Server
{
public:
    Server(unsigned short port);
    ~Server();

    void run();


private:
    void handlePackets();
    void broadCast(sf::TcpSocket *socket, sf::Vector2f vec, float radius);
private:
    std::list<Player*> *_clients;
    std::list<Object*> *_foodItem;
    sf::TcpListener _listner;
    
    bool _IsStart;
    int  _freeId;
};