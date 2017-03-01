

#include <iostream>
using namespace std;
int a,b=0;
int suma (int a, int b)

{
    int suma(int a, int b){
    return a+b;
}



    int roznica(int a, int b){
    return a-b;
}

    int iloraz(int a, int b){
    return  a*b;
}

    float iloraz(int a, int b){
    return (float)a/(float)b;
}


int main(int argc, char **argv){
    int a,b=0;
    do
{
    cout<<"Podaj dwie liczbt";
    cin>>a>>b;
    cout<<"suma"<<suma(a,b)<<endl;
    cout<<"Roznica"<<roznica(a,b)<<endl;
    cout<<"Iloczyn"<<iloczyn(a,b)<<endl;
    cout<<"Iloraz"<<iloraz(a,b)<<endl;
} while (b!=0);
    return 0;
}

