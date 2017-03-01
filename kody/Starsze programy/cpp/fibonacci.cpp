#include <iostream>
using namespace std;
int long fibonacci(int n)
{
    long long a=0, b=1;

    for(int i=0; n<i; i++)
    {
        cout<<b<<" ";
        b+=a;
        a=b-a;
    }
}
int main(int argc, char **argv)
{
    int n;
    cout<<"Podaj liczbę miesięcy"<<endl;
    cin>>n;
    fibonacci(n);

	return 0;
}

