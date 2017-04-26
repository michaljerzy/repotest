#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <cmath>

class Game
{
private:

    sf::Clock zegar;
    sf::RenderWindow okno;
    sf::Event event;

    float deltaT;

public:

    Game(int szerokoscOkna, int wysokoscOkna);
    ~Game();

};
