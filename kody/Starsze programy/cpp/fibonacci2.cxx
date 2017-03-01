#include <iostream>
using namespace std;
int long fibonacci(int n)
{
    long long a=0;
    long long b=1;
    long int wynik=0;
    for(int i=0; n<i; i++)
    {
        wynik=a+b;
        a=b;
        b=wynik;
        cout<<"Wynik: "<<wynik<<endl;
    }
}
int main(int argc, char **argv)
{
    int n=0;
    cout<<"Podaj liczbę miesięcy"<<endl;
    cin>>n;
    fibonacci(n);

	return 0;
}
