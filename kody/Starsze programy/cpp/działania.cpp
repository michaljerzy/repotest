


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
 float a;
 float b;
 float wynik=0;
    cout<<"Podaj liczbę a: ";
    cin>>a;
    cout<<"Podaj liczbę b: ";
    cin>>b;
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
    wynik= a/b;
    cout<<a<<"/"<<b<<"="<<wynik<<endl;

	return 0;
}
