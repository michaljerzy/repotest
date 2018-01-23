#include "ul_ulamek.h"

using namespace std;

void Oceny::srednia(int a, int b,  int c, int d, int e);
{
    int liczby[5] = {a,b,c,d,e};
    double srednia;
 
    for (int i = 0; i<5; i++)
            srednia+=liczby[i];
    srednia=srednia/5;
 
    cout << "srednia ocen to: " << srednia << endl;
 
    system("PAUSE");
    return(0);
}
