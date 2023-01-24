//
// Created by Haibin Cao on 1/19/23.
//

#include "Application.h"

Application::Application()
:Application({2000,2000}, "Shitty Hangman")
{

}

Application::Application(sf::VideoMode videoMode, const std::string& title)
:videoMode(videoMode), title(title)
{

}

void Application::run()
{
    sf::RenderWindow window(videoMode, title);
    window.setFramerateLimit(60);

    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(sf::Event::Closed == event.type || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                window.close();
            }
        }
        window.clear();

        window.display();
    }
}
