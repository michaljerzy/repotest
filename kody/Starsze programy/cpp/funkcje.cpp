

#include <iostream>
using namespace std;
int a,b=0;
void suma (int a, int b)

{
    int suma=0;
    suma=a+b;
    cout<<"suma"<<suma<<endl;
}

void roznica (int a, int b)

{
    int roznica=0;
    roznica=a-b;
    cout<<"Roznica"<<roznica<<endl;
}

void iloczyn (int a, int b)

{
    int iloczyn=0;
    iloczyn=a*b;
    cout<<"Iloczyn"<<iloczyn<<endl;
}

void iloraz (int a, int b)

{
    float iloraz=0;
    if (b!=0)
    iloraz=(float)a/b;
    else
        cout<<"Dzielnik nie może być zerem!"endl;

    cout<<"Iloraz"<<iloraz<<endl;
}


int main(int argc, char **argv){
    int a,b=0;
    do
{
    cout<<"Podaj dwie liczbt";
    cin>>a>>b;
    suma (a,b);
    roznica (a.b);
    iloczyn (a,b);
    iloraz (a,b);
} while (b!=0);
    return 0;
}

