/*
 * Pierwszy program.cxx
 *
 * Copyright 2016 smaster <smaster@atsbox>
 *

 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    char imie[20];
    int wiek;
	cout<<"Witam!"<< endl;
    cout<<"Podaj swoje imie"<<endl;
    cin>>imie;
    cout<<"Imie "<<imie<<endl;
    cout <<"ile masz lat?"<< endl;
    cin>>wiek;
    cout<< "Masz: " << wiek << " lata" << endl;

	return 0;
}
