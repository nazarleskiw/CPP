#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;

    int i;
    for( i=0; i<t; i++)
    {
        int c, k, w;
        cin>> c >> k>> w;
        
        if((c*w)>k) 
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}