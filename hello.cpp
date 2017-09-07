
#include <iostream>
using namespace std;

#define ROK_TERAZ 2017
#define ROK_CPP 1983
void parzyste(int a)
{
    cout<<"Parzyste: "<<endl;
    for (int i=0; i<a; i=i+2)
    cout <<i<<" ";
    
}
int main(int argc, char **argv)
{
    string imie;
    int wiek;
    int rok;
    int numer;
	cout<<"Czesc, podaj imię"<<endl;
    cin>>imie;
    cout << "Witaj "<< endl << imie << endl;
    cin>>wiek;
    cout << "Rok: "<< ROK_TERAZ - wiek << endl;
    rok = ROK_TERAZ - wiek;
    if (rok> ROK_CPP)
    {
        cout<<"Jesteś młodszy od języka CPP"<<endl;
    }
        else if (rok<ROK_CPP){
        
        cout<<"Jesteś starszy od języka CPP"<<endl;
    }
    cout<<"Podaj liczbę: "<<endl;
    
    cin>>numer;
    parzyste(numer);
    
	return 0;
}

