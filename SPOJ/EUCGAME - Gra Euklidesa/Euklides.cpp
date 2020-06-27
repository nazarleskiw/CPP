#include <iostream>
using namespace std;

int t, i, a, b, wynik;

int main()
{
    cin >> t ;
    for (i=0; i<t; i++)
    {
        cin >> a >> b;

        while (a!=b)
        {
            if (a>b)
            {
                a = a - b;
            }
            else
            {
                b = b - a;
            }

        }
        cout<<a+b<<endl;
    }
}