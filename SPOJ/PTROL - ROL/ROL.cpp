#include <iostream>
using namespace std;

int i, t, n;
int liczba [100];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        {
            for (i=1; i<=n; i++)
            {
                cin >> liczba [i];
            }
            for (i=2; i<=n; i++)
            {
                cout << liczba[i] << " " ;
            }
            cout << liczba[1] << endl ;
        }
    }
}
