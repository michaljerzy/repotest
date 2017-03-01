


#include <iostream>
using namespace std;
void nwd2(int a, int b){

   do{
        a=a%b;
        b=b-a;
    } while(a>0);
    cout<<"NWD:"<<b<<endl;
}

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
    cout<<"Podaj dwie liczby: "<<endl;
    cin>>a;
    cin>>b;
    nwd1(a,b);
    nwd2(a,b);


	return 0;
}

