


#include <iostream>
using namespace std;

void wypelnij(char tab[], char rozmiar){
    cout<<"Podaj"<<rozmiar<<"znaków: "<<endl;
    for (int i=0; i<rozmiar; i++) {
        cin>>tab[i];
    }
}
int drukuj(char tab[], bool wstecz){
    cout<<"Zawartość tablicy: "<<endl;
    int i=0;
    while (tab[i] !='\0'){
        cout<<tab[i];
    i++;
    }
    return i;
}


int main(int argc, char **argv)
{
    int rozmiar=100;
    char tab [rozmiar];
    //wypelnij(tab, rozmiar);
    //cin>>tab;
    cin.getline(tab,rozmiar);
    cout<< "znaków: "<< drukuj(tab,true)<<endl;
	return 0;
}

