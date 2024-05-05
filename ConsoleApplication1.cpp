#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 1200), "SFML works!");
    sf::CircleShape shape(200.f);
    sf::CircleShape shape1(300.f);
    sf::CircleShape shape2(50.f);
    sf::CircleShape shape3(50.f, 3);
    shape.setFillColor(sf::Color::Yellow);
    shape1.setFillColor(sf::Color::Yellow);
    shape2.setFillColor(sf::Color::Black);
    shape3.setFillColor(sf::Color::Red);
    shape.setPosition(350.f, 150.f);
    shape1.setPosition(300.f, 400.f);
    shape2.setPosition(400.f, 250.f);
    shape3.setPosition(320.f, 250.f);
    shape3.setRotation(35.f);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.draw(shape3);
        window.draw(shape1);
        window.draw(shape2);
        window.display();
    }

    return 0;
}