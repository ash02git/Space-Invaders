#include <SFML/Graphics.hpp>
int main()
{
    sf::VideoMode vMode = sf::VideoMode(800, 600);//this is to create the length and widht of the window

    sf::RenderWindow rWindow(vMode, "SFML Window");//this is to create the window itself
    //rWindow.clear(sf::Color::Red);
    //sf::RenderWindow rWindow(sf::VideoMode::getFullscreenModes()[0], "Fullscreen Window", sf::Style::Fullscreen);//for fullscreen

    //rWindow.setFramerateLimit(60);//frame rate limiting
    //window.setPosition(sf::Vector2i(100, 100));// to set the position of the window
    
    while (rWindow.isOpen())
    {
        sf::Event event;
        while (rWindow.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                rWindow.close();
        }

        rWindow.clear(sf::Color::Blue);

        rWindow.display();
    }
}