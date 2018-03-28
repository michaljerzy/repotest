#ifndef KLASA_DRZEWO_HPP
#define KLASA_DRZEWO_HPP

#include <iostream>

struct Wezel {
    int wartosc;
    Wezel *lewy;
    Wezel *prawy;
};

class Drzewo{
    private:
        *korzen = NULL;
    public: 
        Drzewo(); 
        void dodajWezel(int);
        void wyswietlRosnaco();
        void wyswietlMalejaco();
};

#endif

