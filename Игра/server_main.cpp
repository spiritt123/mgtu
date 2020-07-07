
#include "server.h"

int main()
{

    Server server(8080);
    server.run();
    /*

    float x, y;
    std::vector<Object*> foodItem;
    
    while(1)
    {

        if (rand()%10 == 0)
        {
            Object *fd = new Object();
            fd->setPosition(rand()%400, rand()%400);
            fd->setRadius(10);
            foodItem.push_back(fd);
        }

        sf::Packet foodsPacket;
        foodsPacket.clear();
        int k = foodItem.size();
        pl->CheckingForFood(&foodItem);
        foodsPacket << k;
        for (int i = 0; i < foodItem.size(); ++i)
        {
            foodsPacket << foodItem[i]->getPosition().x 
                        << foodItem[i]->getPosition().y 
                        << foodItem[i]->getRadius();
        }

        foodsPacket << pl->getPosition().x << pl->getPosition().y << pl->getRadius();
        socket.send(foodsPacket);
        
        
    }*/

    return 0;
}
