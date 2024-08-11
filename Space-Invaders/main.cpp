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

    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        window.display();
    }
}