
#include <iostream>
using namespace std;


void sortuj( int tab[], int n )
{
	int pomocnik;
    int k;
    for( int i = 0; i < n; i++ )
    {
        k = i;
        for( int j= i+1; j<n; j++ ){
			if(tab[j] < tab[k])
				k = j;
		}
		pomocnik = tab[k];
		tab[k] = tab[i];
		tab[i] = pomocnik;

	}
}
int main(int argc, char **argv){

int tab [] = {74, 77, 21, 76};
    int n =4;

	sortuj(tab, n);
	for(int i=0;i<n;i++)
	cout<<tab[i]<<" ";

   return 0;
}
