#pragma once

#include "SFML/Network.hpp"

#include <unordered_map>

#include "Player.h" 

class Server
{
public:
    Server(unsigned short port);
    ~Server();

    void run();
    
private:
    typedef std::unordered_map<sf::TcpSocket*, Player*> Clients;
    Clients clients;
    sf::TcpListener listner;

private:
    bool IsStart;
    int _freeId;
    void handlePackets();
    void broadCast(sf::TcpSocket *socket);
    
};