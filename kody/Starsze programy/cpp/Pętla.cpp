


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int a=0;
    int i=0;

    cout<<"Liczba: "<<endl;
    cin >> a;
    for (i=0; i<a; i=i+2)
    cout <<i<<" ";


    for (i=0; i<a; i++)
    if (i % 2 !=0)
     cout <<i<<" ";

	return 0;
}
