

#include <iostream>
using namespace std;


    int suma (int a, int b)
    {

        return a+b;

    }

int main(int argc, char **argv){
    int a,b=0;
    cout<<"Podaj dwie liczby";
    cin>>a;
    cin>>b;
    a=a*a;
    b=b*b;
    cout<<suma(a,b);
    return 0;
}

