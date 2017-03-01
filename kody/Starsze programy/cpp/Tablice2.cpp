


#include <iostream>
using namespace std;

void wypelnij(int tab[], int rozmiar){
    cout<<"Podaj"<<rozmiar<<"liczb: "<<endl;
    for (int i=0; i<rozmiar; i++) {
        cin>>tab[i];
    }
}
void drukuj(int tab[], int rozmiar, bool wstecz){
    cout<<"Zawartość tablicy: "<<endl;
    if (wstecz)
    for (int i=0; i<rozmiar; i++) {
        cout << tab[i] << " ";
    }
    else
    for(int i=rozmiar-1; i>=0; i--) {
        cout<<tab[i]<<" ";
    }
}
int suma (int tab[], int rozmiar)
{
    int suma=0;
    for (int i=0;  i<rozmiar; i++)
    {
       suma=suma+tab[i];
    }
    return 0;
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
    int rozmiar=10;
    float suma=0;
    float srednia=0;
    int tab [rozmiar];
     wypelnij (tab, rozmiar);
     drukuj (tab, rozmiar, false);
     srednia= suma/rozmiar;
     cout<<"Średnia: "<<srednia<<endl;
     cout<<"Najmniejsza: " <<min (tab, rozmiar)<<endl;
      cout<<"Największa: " <<max (tab, rozmiar)<<endl;


	return 0;
}

