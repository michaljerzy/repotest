#include <iostream>

using namespace std;

class Ulamek{
    
private:
    int licznik;
    int mianownik;
public:
    Ulamek (int, int);  //deklaracja konstruktora obiektu
    void zapisz(int, int); //tylko deklaracja
    void wypisz() {
        cout << licznik << "/" << mianownik;
    }
    int get_l() {
        return licznik;
    }
    
    int get_m() {
        return mianownik;
    }
    
    
void skracaj(){
    int a =licznik;
    int b =mianownik;
   do
    { if(a>b)
        a=a-b;
        else
        b=b-a;
    } while(a!=b);
    cout<<"Skrócone"<<licznik/a<< "/"<<mianownik/b<<endl;
}

        
    };



void Ulamek::zapisz(int l, int m) {  //definicja metody
    licznik = l;
    if (m != 0) mianownik = m;
    else {
        cout << "Nie dziel cholero, przez zero!" << endl; 
        exit(1);
    }
}

Ulamek::Ulamek(int l, int m){
licznik = l;
    if (m != 0) mianownik = m;
    else {
        cout << "Nie dziel cholero, przez zero!" << endl; 
        exit(1);
    }
}



int main(int argc, char **argv)
{
    Ulamek ul1(10,50);
    Ulamek ul2(3,6);
    //ul1.zapisz(4, 5);
    //ul2.zapisz(1, 5);
    cout << "1 ułamek: ";
    ul1.wypisz(); 
    cout <<endl<< "2 ułamek: ";
    ul2.wypisz();
    cout<<endl;
    cout << ul1.get_l() << endl; 
    cout << ul1.get_m() << endl; 
    ul1.skracaj();
    
	
	return 0;
}

