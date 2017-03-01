


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

void znaki(int start, int stop){
    for (int i=start; i <=stop; i++)
        cout << i <<"\t" << (char)i <<endl;
}

void zamien (char tab []) {
    int kodascii=(int)tab[0];
    cout<<(int)tab[0]<<endl;

    kodascii= (int)tab[0];
    if(kodascii >96 && kodascii <123)
        tab[0]= (char)kodascii-32;
    cout<< (int) tab[0]<<"\t"<< tab[0]<< endl;
}

void zamien2 (char tab []) {
    int kodascii=(int)tab[0];
    cout<<(int)tab[0]<<endl;

    kodascii= (int)tab[0];
    if (kodascii> 65 && kodascii <96)
        tab[0]= (char)kodascii+32;
    cout<< (int) tab[0]<<"\t"<< tab[0]<< endl;}


int main(int argc, char **argv)
{
    int rozmiar=100;
    char tab [rozmiar];
    cout<<"Jak się nazywasz? "<<endl;
    cin.getline(tab,rozmiar);
    //cout<< "znaków: "<< drukuj(tab,true)<<endl;
    //znaki(65,90);
    //zamien (tab);


    drukuj(tab, true);
    zamien2 (tab);
    drukuj(tab, true);
    int zamien2;
    cout<<"Zawartość tablicy: "<<endl;
    int i=0;
    while (tab[i] !='\0'){

    }


	return 0;
}

