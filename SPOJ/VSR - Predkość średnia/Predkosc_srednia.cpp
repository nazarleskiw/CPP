#include <iostream>
using namespace std;

int v,v2, quanity;
int main()
{
    cin>> quanity;
    for(int i=1; i<=quanity; i++)
    {
        cin>>v>>v2;
        cout<<2*v*v2/(v+v2) <<endl;
    }
}