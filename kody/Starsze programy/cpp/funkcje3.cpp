

#include <iostream>
using namespace std;
int a=0;

int zwieksz (int a){
   return ++a;
}

void zwieksz2 (int &a){
   a++;
}

void zwieksz3 (){
   a++;
}

void drukuj(int a){
        cout<<"Wartość zmiennej: "<<a<<endl;
}
int main(int argc,char **argv) {
    //int a=0;

    cout<<"Podaj liczbę: ";
    cin>>a;
    drukuj(a);
    zwieksz3(a);
    drukuj(a);


    return 0;
}

