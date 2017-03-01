#include <iostream>
#include <cstdlib>
using namespace std;

void sortuj(int tab[], int n)
{
    int pomocnik;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
        {
            if(tab[j] > tab[j + 1])
                {
                    pomocnik = tab[j + 1];
                    tab[j + 1] = tab[j];
                    tab[j] = pomocnik;
                }
        }
}

int main()
{
    int tab [] = {74, 77, 21, 76};
    int n = 4;

    sortuj(tab, n);

    for (int i = 0; i < n; i++)
        cout << tab[i] << endl;

    return 0;
}
