#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, j, t, n_obzartuchy, m_iloscciastek, zjedzoneciastka, czas;

    cin >> t ;
    for (i=0; i<t; i++)
    {
        zjedzoneciastka = 0;
        cin >> n_obzartuchy >> m_iloscciastek;
        for ( j=0; j<n_obzartuchy ; j++)
        {
            cin>> czas;
            zjedzoneciastka= zjedzoneciastka+(86400/czas);
        }

        cout << ceil((double)zjedzoneciastka/m_iloscciastek) <<endl;;
    }
    return 0;
}
