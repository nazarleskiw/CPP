#include <iostream>
using namespace std;

int i, t, n, suma=0, liczba;

int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i=1; i<=n; i++)
        {
            cin >> liczba ;
            suma=suma +liczba;
        } 
        cout << suma << endl;
        suma=0;
    }

}
