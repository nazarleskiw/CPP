#include <bits/stdc++.h>
using namespace std;

int i,max_trening;
int dzien_tygodnia[7];
string dzien;

int main()
{
    cin >> max_trening;
    for (int i = 0; i < max_trening; i++)
    {
        cin >> dzien;
        if (dzien == "pon")
        {
            ++dzien_tygodnia[0];
        }
        if (dzien == "wt")
        {
            ++dzien_tygodnia[1];
        }
        if (dzien == "sr")
        {
            ++dzien_tygodnia[2];
        }
        if (dzien == "czw")
        {
            ++dzien_tygodnia[3];
        }
        if (dzien == "pt")
        {
            ++dzien_tygodnia[4];
        }
        if (dzien == "sob")
        {
            ++dzien_tygodnia[5];
        }
        if (dzien == "niedz")
        {
            ++dzien_tygodnia[6];
        }
    }
    int min_trening = 0;
    for (int i = 0; i < 7; ++i) {
        min_trening = max(min_trening, dzien_tygodnia[i]);
    }
    cout << min_trening << " " << max_trening << endl;
}