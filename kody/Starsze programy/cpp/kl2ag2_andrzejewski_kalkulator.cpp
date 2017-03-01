
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
float a;
float b;
float wynik=0;
do
{
    cout<<"Wynik: " <<wynik<<endl;
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
if(a!=0 && b!=0)
{
    cout<<"[1]+"<<endl;
    cout<<"[2]-"<<endl;
    cout<<"[3]*"<<endl;
    cout<<"[4]/"<<endl;

    int i;
    cin>>i;
    switch(i)
    {
        case 1 :
        wynik=a+b;
        cout<<wynik<<endl;
            break;
        case 2 :
        wynik=a-b;
        cout<<wynik<<endl;
            break;
        case 3 :
        wynik=a*b;
        cout<<wynik<<endl;
            break;
        case 4 :
        wynik=a/b;
        cout<<wynik<<endl;
            break;
        case 5 :
            break;
            default:
        cout<<"Podałeś błędne dane"<<endl;
            break;
        }
    }
}while(wynik>0);

	return 0;
}

