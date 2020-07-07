
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include "unistd.h"

#include "client.h"

int main()
{

    Client client;
    sf::Socket::Status status = client.connect(sf::IpAddress::getLocalAddress(), 8080);

    if(status != sf::Socket::Done)
    {
        std::cout<<"Sorry we couldn't !!! connect\n";
        return -1;
    }

    sf::RenderWindow window(sf::VideoMode(620, 480), "Project Life");
    window.setFramerateLimit(30);
    
    float x, y;
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (event.type == sf::Event::MouseMoved)
            {
                x = event.mouseMove.x;
                y = event.mouseMove.y;
            }  
        }
        //std::string toBePushed;
        sf::Socket::Status status = client.send(x, y);
        if(status == sf::Socket::Disconnected)
        {
            std::cout << "disconect\n";
            return -1;
        }
        
        window.clear();

        
        sf::Packet *packetOfData = new sf::Packet;
        status = client.receive(packetOfData);
        
        if(status == sf::Socket::Done)
        {

            int k;
            *packetOfData >> k;
            float px, py, radius;
            for (int i = 0; i < k; ++i)
            {
                sf::CircleShape circle;
                *packetOfData >> px >> py >> radius;
                circle.setRadius(radius);
                circle.setPosition(px, py);
                circle.setFillColor(sf::Color(210, 10, 110));
                window.draw(circle);
                usleep(10);
            }
        }
        else if(status == sf::Socket::Disconnected)
        {
            std::cout << "disconect2\n";
            return -1;
        }
        
        usleep(10);
        window.display();
    }
 
    return 0;
}