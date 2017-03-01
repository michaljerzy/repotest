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

int main(int argc, char **argv)
{
    int rozmiar=0;
    cout<<"Ile podasz liczb?"<<endl;
    cin>> rozmiar;
    int tab [rozmiar];
     wypelnij (tab, rozmiar);
     cout<<"Najmniejsza: " <<min (tab, rozmiar)<<endl;
      cout<<"Największa: " <<max (tab, rozmiar)<<endl;


	return 0;
}
