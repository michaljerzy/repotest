#include <iostream>

using namespace std;

int main()
{
    int a, i;

    do{
        cout << "Podaj a: ";
        cin >> a;
    }while(a<0 || a>100);

    i = 2;

    do{
        if(a == i){
            cout << "Parzysta" << endl;
            return 0;
        }
        i = i+2;
    }while(i != a);

    cout << "Nieparzysta" << endl;

    return 0;
}
