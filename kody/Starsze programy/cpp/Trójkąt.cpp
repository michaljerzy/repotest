


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
    float a,b,c=0;
    cout<<"Podaj trzy boki: "<<endl;
    cin>>a>>b>>c;
    if (b+c>a && a+c>b && a+b>c)
    cout<<"Jest możliwe utworzenie trójkąta"<<endl;
    else
    cout<<"Nie jest możliwe utworzenie trójąta"<<endl;



	return 0;
}
