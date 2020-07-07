
#include <iostream>
#include "client.h"

Client::Client()
{

}


Client::~Client(void) {}


sf::Socket::Status Client::connect(const sf::IpAddress & IP, unsigned short port)
{
    //connect to server
    sf::Socket::Status status = _socket.connect(IP, port);
    _socket.setBlocking(false);
    return status;
}

sf::Socket::Status Client::send(float x, float y)
{
    sf::Packet packet;
    
    packet << x << y;
    
    return _socket.send(packet);
}

sf::Socket::Status Client::receive(sf::Packet *packetOfData)
{
    sf::Socket::Status status = _socket.receive(*packetOfData);
    return status;
}