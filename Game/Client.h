#pragma once
#include "SFML/Network.hpp"

class Client
{
public:
    Client();
    ~Client();

    sf::Socket::Status connect(const sf::IpAddress & IP, unsigned short port);
    sf::Socket::Status send(float x, float y);
    sf::Socket::Status receive(sf::Packet *packetOfData);

private:
    int _id;
    sf::TcpSocket _socket;
};