#include <iostream>
using namespace std;

int t, i, a, b, wynik;

int main()
{
    cin >> t ;
    for (i=0; i<t; i++)
    {
        cin >> a >> b;
        wynik =a%b;
        
        if(wynik<0 && b>0)
        {
            wynik += b;
        }
        
        else if(wynik<0 && b<0)
        {
            wynik += -b;
            cout << wynik << endl;
        }
    }
}
