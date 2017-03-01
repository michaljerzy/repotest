


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
 float a,b,c,d,e,f;
    cout<<"Podaj krótszy bok prostokąta a: ";
    cin>>a;
    cout<<"Podaj dłuższy bok prostokąta b: ";
    cin>>b;
    cout<<"Pole prostokąta"<<endl;
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
    cout<<"Obwód prostokąta"<<endl;
    cout<<a<<"+"<<b<<"="<<2*a+2*b<<endl;
    cout<<"Podaj wysokość trójkąta: ";
    cin>>c;
    cout<<"Podaj podstawę trójkata: ";
    cin>>d;
    cout<<"Pole trójkąta"<<endl;
    cout<<"Pole: "<<(c*d)/2<<endl;
    cout<<"Podaj boki trójkata"<<endl;
    cin>>d;
    cin>>e;
    cin>>f;
    cout<<"Obwód: "<<d+e+f<<endl;



	return 0;
}
