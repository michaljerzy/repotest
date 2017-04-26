#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <cstdlib>
#include <cmath>
#include <ctime>

class Pilka
{
private:
    sf::CircleShape pilka;
    //sf::SoundBuffer buffer;
    //sf::Sound zderzenie;
    sf::Vector2f srodek;

    float r, V, kat;
    const float pi = M_PI;

public:

    Pilka(sf::RenderWindow & okno, float promien = 10.f, float predkosc = 800.f, sf::Color kolor = sf::Color(253, 178, 28));
    ~Pilka();

    sf::Vector2f zwPoz();

    void wysPilka(sf::RenderWindow & okno);
    void poruszanie(float czas);
    void wyzKat();
    void kolizjaSciana(sf::RenderWindow & okno);
    void kolizjaPaletka(sf::RectangleShape  paletka);
    void restart();
    void Punkt(sf::RectangleShape  paletkaGracza, sf::RectangleShape  paletkaWroga);

    bool czyKolizja(sf::RectangleShape  paletka);

};
