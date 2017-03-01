#include <iostream>
using namespace std;

void Sortowanie( int tab[], int wielkosc )
{
    int k;
    for( int i = 0; i < wielkosc; i++ )
    {
        k = i;
        for( int j = i + 1; j < wielkosc; j++ )
        if( tab[j] < tab[k] )
             k = j;

        swap( tab[k], tab[i] );
    }
}

int main(int argc, char **argv){

cout<<"Liczby: "<<sortowanie(tab[], wielkosc)<<endl;


return 0;
}

