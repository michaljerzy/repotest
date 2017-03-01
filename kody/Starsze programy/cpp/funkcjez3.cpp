

#include <iostream>
using namespace std;

int polek (int a){
return a*a;
}

int poleb (int a, int b){
return b*a;
}
int main(int argc,char **argv){
    int a,b=0;
    cout<<"Podaj dwa boki"<<endl;
    cin>>a;
    cin>>b;
cout<<poleb(a,b)<<endl;
cout<<polek(a)<<endl;


    return 0;
}

