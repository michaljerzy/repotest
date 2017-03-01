


#include <iostream>
using namespace std;
void nwd1(int a, int b){
   do
    { if(a>b)
        a=a-b;
        else
        b=b-a;
    } while(a!=b);
    cout<<"NWD:"<<a<<endl;
}

int main(int argc, char **argv)
{
    int a,b;
    cout<<"Podaj dwie liczby"<<endl;
    cin>>a;
    cin>>b;
    nwd1(a,b);


	return 0;
}

