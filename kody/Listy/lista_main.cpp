#include <iostream>
#include "lista.hpp"

using namespace std; 

int main(int argc, char **argv)
{
    Lista lista; //deklaracja zmiennej typu Lista
    lista.Dodaj(1);
    lista.Dodaj(6);
    lista.Dodaj(7);
    lista.Dodaj(3);
    lista.Dodaj(9);
    lista.Wyswietl();
    lista.Usun();
    lista.Wyswietl();
	
	return 0;
}

