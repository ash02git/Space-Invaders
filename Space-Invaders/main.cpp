#include <SFML/Graphics.hpp>
#include <iostream>
#include "e:/Outscal/Space-Invaders/Space-Invaders/Header/GameService.h"
using namespace std;

/*
class Player
{
private:
    int player_score = 0;
    int health = 100;
    int movement_speed = 5;
    sf::Vector2f position = sf::Vector2f(200,100);

public:
    sf::Texture p_texture;
    sf::Sprite p_sprite;

    Player()
    {
        
    }

    int getSpeed()
    {
        return movement_speed;
    }

    int setSpeed(int newSpeed)
    {
        movement_speed = newSpeed;
    }

    sf::Vector2f getPosition()
    {
        return position;
    }


    void takeDamage()
    {

    }

    void move(float offsetX)
    {
        position.x += offsetX;
    }

    void shootBullets()
    {

    }
};
*/

int main()
{
    /*
    sf::VideoMode videomode = sf::VideoMode(800, 600);
    sf::RenderWindow window(videomode, "SFML Window");

    Player player;

    player.p_texture.loadFromFile("assets/textures/player_ship.png");
    player.p_sprite.setTexture(player.p_texture);
    player.p_sprite.setScale(0.3, 0.3);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //Keyboard Inputs
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            player.move(-1.0 * player.getSpeed());
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            player.move(1.0 * player.getSpeed());
        }

        window.clear(sf::Color::Black);

        player.p_sprite.setPosition(player.getPosition());
        window.draw(player.p_sprite);//drawing the player

        window.display();
    }
    */
    GameService gs;//object creation for GameService
    gs.ignite();//started the game
    if (gs.isRunning())
    {
        gs.update();
        gs.render();
    }
    return 0;
}