#include <iostream>
using namespace std;

int main()
{
    int x , y;
    int tab [1000];
    while (cin >>x >>y)
    {
        for (int i=0; i<1000; i++)
        {
            tab[i] = 0;
        }
        for (int i=0; i<y; i++)
        {
            int ciag;
            cin >> ciag;
            tab[ciag]+=1;
        }
        cout << tab[x]<< endl;
    }
    return 0;
}
