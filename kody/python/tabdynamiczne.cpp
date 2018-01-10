

#include <iostream>

using namespace std;

int tab1W(){
    
    int *ptab = NULL;
    cout << "Ile podasz liczb?";
    int ile;
    cin >> ile;
    
    try {
        ptab = new int[ile]; //utworzenie tablicy dynamicznej
    } catch(bad_alloc) {
        cout<< "Za mało pamięci";
        return 1;
    }

}
int main(int argc, char **argv)
{
	tab1W();
    
     
	return 0;
}

