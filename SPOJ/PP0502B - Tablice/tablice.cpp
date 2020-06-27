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
            
            for(int i=n; i>0; i--)
            {
                cout << liczba[i] << " ";
            }
        }
    }

}

