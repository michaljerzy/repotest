


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a=0;
    int s=0;
    int i=0;
    int iloczyn=1;
    cout<<"Podaj liczbę: "<<endl;
    cin >> a;
    for (i=0; i < a; i++ ){
    cout <<i<<" ";
    s=s+i;}


    cout<<"\nSuma liczb: "<<s<<endl;


    for (i=1; i <= a; i++ ){
    iloczyn=iloczyn*i;}


    cout<<"\nIloczyn liczb: "<<iloczyn<<endl;

    for (i=0; i < a; i+2 ){
        s=i+s;
    }


    cout<<"\nSuma liczb parzystych: "<<s<<endl;

	return 0;
}
