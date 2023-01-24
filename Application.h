//
// Created by Haibin Cao on 1/19/23.
//

#ifndef SHITTYHANGMAN_APPLICATION_H
#define SHITTYHANGMAN_APPLICATION_H
#include <string>
#include <SFML/Graphics.hpp>

class Application
{
private:
    sf::VideoMode videoMode;
    std::string title;
public:
    Application();
    Application(sf::VideoMode videoMode, const std::string& title);
    void run();

};


#endif //SHITTYHANGMAN_APPLICATION_H
