

#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a =1;
    float b =4;
    char znak = 'z';
    bool wynik =false ;


/*
    cout << a << " " <<b<< endl;
    cout << "Podaj wartość a: " ;
    cin >> a;
    cout << "Podaj wartość b: " ;
    cin >> b;
    cout << a << " " <<b<< endl;
*/
    cout<< "Rozmiar w pamięci: " << endl;
    cout << "int\t\t" <<sizeof(a) << endl;
    cout << "float\t\t" <<sizeof(b) << endl;
    cout << "char\t\t" <<sizeof(znak) << endl;
    cout << "bool\t\t" <<sizeof(wynik) <<" "<<wynik<< endl;

	return 0;
}
