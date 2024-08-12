#include <SFML/Graphics.hpp>
#include <iostream>
using namespace std;

class Player
{
private:
    int player_score = 0;
    int health = 100;
    int movement_speed = 2;
    sf::Vector2f position = sf::Vector2f(400, 0);

public:
    sf::Texture p_texture;
    sf::Sprite p_sprite;

    Player()
    {
        
    }

    int getScore()
    {
        return player_score;
    }

    int setScore(int newScore)
    {
        player_score = newScore;
    }

    void takeDamage()
    {

    }

    void move()
    {

    }

    void shootBullets()
    {

    }
};

int main()
{
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
            player.move();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            player.move();
        }

        window.clear(sf::Color::Black);

        player.p_sprite.setPosition(player.p_sprite.getPosition());
        window.draw(player.p_sprite);//drawing the player

        window.display();
    }
}