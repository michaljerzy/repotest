#include <iostream>
using namespace std;

void wypelnij(int tab[], int rozmiar){
    cout<<"Podaj "<<rozmiar<<" liczb: "<<endl;
    for (int i=0; i<rozmiar; i++) {
        cin>>tab[i];
    }
}
int min (int tab[], int rozmiar)
{
    int najmniejszy= tab[0];
    for (int i=1;  i<rozmiar; i++)
    if(najmniejszy>tab[i])
    najmniejszy=tab[i];

    return najmniejszy;
}

int max (int tab[], int rozmiar)
{
    int najwiekszy= tab[0];
    for (int i=1;  i<rozmiar; i++)
    if(najwiekszy<tab[i])
    najwiekszy=tab[i];
    return najwiekszy;
}

long int silnia(int liczba){
    int wynik=1;
    for(int i=1; i<=liczba ;i++)
    wynik=wynik*i;
    return wynik;
}
int main(int argc, char **argv)
{
    int liczba=0;
    cout<<"Podaj liczbę "<<endl;
    cin>>liczba;
    cout<<"Silnia: " <<silnia(liczba)<<endl;


	return 0;
}
