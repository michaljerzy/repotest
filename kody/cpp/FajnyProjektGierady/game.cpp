#include "game.hpp"

Game::Game(int szer, int wys)

{
okno.create(sf::VideoMode(abs(szer), abs(wys), 32), "Pong", sf::Style::Close);
okno.display();
}

Game::~Game()
{}
