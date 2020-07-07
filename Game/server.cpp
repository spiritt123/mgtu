
#include "server.h"
#include <iostream>

Server::Server(unsigned short port)
{
    listner.listen(port);
    listner.setBlocking(false);
    _freeId = 1;
    IsStart = true;    
}


Server::~Server()
{
}

void Server::handlePackets()
{
    //handle incoming data
    for(Clients::iterator it = clients.begin(); it != clients.end();)
    {
        sf::Packet packet;
        sf::Socket::Status status = it->first->receive(packet);
        
        switch (status)
        {
        case sf::Socket::Done:
            float x, y;
            packet >> x >> y;
            it->second->moveTo(x, y);
            broadCast(it->first);
            ++it;
            break;

        case sf::Socket::Disconnected:
            delete it->first;
            delete it->second;
            it = clients.erase(it);
            break;

        default:
            ++it;
        }
    }}

void Server::broadCast(sf::TcpSocket *socket)
{
    sf::Packet packetOfData;
    packetOfData << (int)(clients.size());
    for(Clients::iterator it = clients.begin(); 
        it!=clients.end(); ++it)
    {
        packetOfData << it->second->getPosition().x 
                     << it->second->getPosition().y
                     << it->second->getRadius();
    }
    socket->send(packetOfData);

}




void Server::run()
{

    sf::TcpSocket *nextClient = nullptr;
    while(1)
    {
        //Handle newcoming clients
        if(nextClient == nullptr)
        {
            nextClient = new sf::TcpSocket;
            nextClient->setBlocking(false);

        }
        
        if(listner.accept(*nextClient) == sf::Socket::Done)
        {
            Player *pl = new Player();
            clients.insert(std::make_pair(nextClient, pl));
            nextClient=nullptr;
            IsStart = false;
            ++_freeId;
        }

        handlePackets();

        if ((clients.size() == 0) and !(IsStart))
        {
            break;
        }
    
    }
}
