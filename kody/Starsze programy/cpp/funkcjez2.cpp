

#include <iostream>
using namespace std;


    int suma (int a, int b, int c)
    {

        return a+b+c;

    }

int main(int argc, char **argv){
    int a,b,c=0;
    cout<<"Podaj trzy liczby";
    cin>>a;
    cin>>b;
    cin>>c;
    if(a+b>c&&c+a>b&&b+c>a)
        cout<<"Tójkąt będzie istaniał";
    else
         cout<<"Trójkąt nie może istnieć";


    return 0;
}

