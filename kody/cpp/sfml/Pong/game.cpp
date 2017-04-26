#include "game.hpp"


Game::Game(int szer, int wys)
{
    okno.create(sf::VideoMode(abs(szer), abs(wys), 32), "Pong", sf::Style::Close);
    okno.setFramerateLimit(60);


    sf::Vector2f rozPal(150, 30);

    Paletka gracz(rozPal, sf::Vector2f(okno.getSize().x / 2, okno.getSize().y - (okno.getSize().y / 10)), 700.f, sf::Color(132, 255, 38));
    Paletka wrog(rozPal, sf::Vector2f(okno.getSize().x / 2, (okno.getSize().y / 10)), 400.f, sf::Color(253, 28, 43));

    Pilka pilka(okno);

    while (okno.isOpen())
        {
            deltaT = zegar.restart().asSeconds();

            while (okno.pollEvent(event))
            {
                if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                    okno.close();

                if (event.type == event.Closed)
                    okno.close();
            }

            gracz.sterowanie(okno, deltaT);

                wrog.sterowanieAI(okno, deltaT, pilka.zwPoz());

                pilka.poruszanie(deltaT);
                pilka.kolizjaPaletka(gracz.zwPal());
                pilka.kolizjaPaletka(wrog.zwPal());
                pilka.kolizjaSciana(okno);
                pilka.Punkt(gracz.zwPal(), wrog.zwPal());



            okno.clear(sf::Color(109, 163, 152));

            gracz.wys(okno);
            wrog.wys(okno);

            pilka.wysPilka(okno);

            okno.display();
        }
    }
    Game::~Game()
    {}
