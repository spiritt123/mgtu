
#include "Server.h"
#define radiusMap 2000

Server::Server(unsigned short port)
{
    _listner.listen(port);
    _listner.setBlocking(false);
    _freeId = 1;
    _IsStart = true;
    _clients = new std::list<Player*>;
    _foodItem = new std::list<Object*>;
}


Server::~Server()
{
}

void Server::handlePackets()
{
    //handle incoming data
    for (std::list<Player*>::iterator it = _clients->begin(); 
        it != _clients->end();)
    {
        sf::Packet packet;
        sf::Socket::Status status = (*it)->getSocket()->receive(packet);
        
        switch (status)
        {
        case sf::Socket::Done:
            float x, y;
            packet >> x >> y;
            (*it)->moveTo(x, y, radiusMap);
            (*it)->tryToEatAFood(_foodItem);
            (*it)->tryToEatAPlayers(_clients, (*it)->getId());
            broadCast(*it);
            ++it;
            break;

        case sf::Socket::Disconnected:
            it = _clients->erase(it);
            break;

        default:
            ++it;
        }
    }}



void Server::broadCast(Player *pl)
{
    sf::Packet packetOfData;
    packetOfData << (pl->getPosition().x + pl->getRadius()) 
                 << (pl->getPosition().y + pl->getRadius())
                 << (int)log2(pl->getRadius() / 10)
                 << ((int)(_clients->size()) + (int)(_foodItem->size()));
    
    for (std::list<Object*>::iterator it = _foodItem->begin(); 
        it != _foodItem->end(); ++it)
    {
        packetOfData << (*it)->getPosition().x 
                     << (*it)->getPosition().y
                     << (*it)->getRadius()
                     << (*it)->getColor().r
                     << (*it)->getColor().g
                     << (*it)->getColor().b;
    }

    for (std::list<Player*>::iterator it = _clients->begin(); 
        it!=_clients->end(); ++it)
    {
        packetOfData << (*it)->getPosition().x 
                     << (*it)->getPosition().y
                     << (*it)->getRadius()
                     << (*it)->getColor().r
                     << (*it)->getColor().g
                     << (*it)->getColor().b;
    }
    pl->getSocket()->send(packetOfData);

}




void Server::run()
{
    srand(time(NULL));
    sf::TcpSocket *nextClient = nullptr;
    while (1)
    {
        //Handle newcoming clients
        if (nextClient == nullptr)
        {
            nextClient = new sf::TcpSocket;
            nextClient->setBlocking(false);

        }
        
        if (_listner.accept(*nextClient) == sf::Socket::Done)
        {
            Player *pl = new Player;
            pl->connect(nextClient);
            pl->setId(_freeId);
            pl->setPosition(0, 0);
            pl->setColor(rand()%255, rand()%255, rand()%255);
            _clients->push_back(pl);
            nextClient=nullptr;
            _IsStart = false;
            ++_freeId;
        }

        if ((_clients->size() == 0) and !(_IsStart))
        {
            break;
        }

        if (rand()%500 == 0)
        {
            float x = rand()%4000 - 2000;
            float y = rand()%4000 - 2000;
            
            if ((x * x) + (y * y) < 4000000)
            {
                Object *fd = new Object;
                fd->setPosition(x, y);
                fd->setRadius(10);
                _foodItem->push_back(fd);
            }
        }

        usleep(500);

        handlePackets();

    
    }
}
