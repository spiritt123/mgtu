
#include <SFML/Graphics.hpp>
#include <iostream>

#define WIDTH 620
#define HEIGHT 480

int menu()
{
    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "Project Life");
    window.setFramerateLimit(30);

    sf::Texture menuTexture1, menuTexture2, menuTexture3, aboutTexture, menuBackground;
    menuTexture1.loadFromFile("img/start.png");
    menuTexture2.loadFromFile("img/connect.png");
    menuTexture3.loadFromFile("img/exit.png");
    sf::Sprite menu1(menuTexture1), menu2(menuTexture2), menu3(menuTexture3);

    int menuNum = 0;

    menu1.setPosition(WIDTH/2 - 150, HEIGHT/2 - 60);
    menu2.setPosition(WIDTH/2 - 150, HEIGHT/2);
    menu3.setPosition(WIDTH/2 - 150, HEIGHT/2 + 60);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }  
        }

        menu1.setColor(sf::Color::White);
        menu2.setColor(sf::Color::White);
        menu3.setColor(sf::Color::White);
        
        menuNum = 0;
        
        window.clear(sf::Color(129, 181, 221));

        if (sf::IntRect(WIDTH/2 - 150, HEIGHT/2 - 60,  WIDTH/2 + 150, 50).contains(sf::Mouse::getPosition(window))) 
        { 
            menu1.setColor(sf::Color::Blue); menuNum = 1; 
        }
        if (sf::IntRect(WIDTH/2 - 150, HEIGHT/2,  WIDTH/2 + 150, 50).contains(sf::Mouse::getPosition(window))) 
        { 
            menu2.setColor(sf::Color::Blue); menuNum = 2; 
        }
        if (sf::IntRect(WIDTH/2 - 150, HEIGHT/2 + 60, WIDTH/2 + 150, 50).contains(sf::Mouse::getPosition(window))) 
        { 
            menu3.setColor(sf::Color::Blue); menuNum = 3; 
        }

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            return menuNum;
            window.close(); 
        }
        ///// отрисовка меню////
        window.draw(menu1);
        window.draw(menu2);
        window.draw(menu3);
        ///// создание окна////
        window.display();
    }
        
    return 0;
}
