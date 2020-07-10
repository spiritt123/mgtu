
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <thread>
#include "unistd.h"

#include "menu.h"
#include "Client.h"
#include "Server.h"

#define WIDTH 620
#define HEIGHT 480

void StartServer()
{
    Server server(8080);
    server.run();   
}

int main() 
{
    switch (menu())
    {
        case 0:
            break;
        case 1:
            std::thread lf(StartServer);
            lf.detach();
            break;

    }
    usleep(100000); 
    

    Client client;
    sf::Socket::Status status = client.connect(sf::IpAddress::getLocalAddress(), 8080);

    if (status != sf::Socket::Done)
    {
        std::cout<<"Sorry we couldn't !!! connect\n";
        return -1;
    }


    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Project Life");
    window.setFramerateLimit(30);
    
    float x, y;
    float px, py, radius;

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
                x = event.mouseMove.x - (float)WIDTH/2;
                y = event.mouseMove.y - (float)HEIGHT/2;
            }  
        }

        sf::Socket::Status status = client.send(2*x/WIDTH, 2*y/HEIGHT);
        if (status == sf::Socket::Disconnected)
        {
            std::cout << "disconect\n";
            return -1;
        }
        
        window.clear();

        
        sf::Packet *packetOfData = new sf::Packet;
        status = client.receive(packetOfData);

        
        if (status == sf::Socket::Done)
        {

            int k;
            float dx = 0, dy = 0;
            *packetOfData >> dx >> dy;
            dx = (float)WIDTH/2 - dx;
            dy = (float)HEIGHT/2 - dy;
            *packetOfData >> k;
        
            sf::CircleShape circle;
            circle.setRadius(2000);
            circle.setPosition(dx - 2000, dy - 2000);
            circle.setFillColor(sf::Color(255, 255, 255));
            window.draw(circle);

            for (int i = 0; i < k; ++i)
            {
                sf::CircleShape circle;
                *packetOfData >> px >> py >> radius;
                circle.setRadius(radius);
                circle.setPosition(px + dx, py + dy);
                circle.setFillColor(sf::Color(210, 10, 110));
                window.draw(circle);
                usleep(10);
            }
        }
        else if (status == sf::Socket::Disconnected)
        {
            std::cout << "disconect2\n";
            return -1;
        }
        
        usleep(1000);
        window.display();
    }
 
    return 0;
}