#include <iostream>
#include "klasa_drzewo.hpp"

using namespace std;

int main(int argc, char **argv)
{
    Drzewo drzewo;
	stworzWezel(wezel, 10);
	stworzWezel(wezel, 8);
	stworzWezel(wezel, 4);
	stworzWezel(wezel, 9);
	stworzWezel(wezel, 20);
	stworzWezel(wezel, 16);
	stworzWezel(wezel, 30);
    
    cout << "Posortowane drzewo niemalejaco: ";
    drzewo.WyswietlRosnaco(wezel);
    
    cout << "Posortowane drzewo malejaco: ";
    drzewo.wyswietlMalejaco(wezel); 
        
	return 0;
}
