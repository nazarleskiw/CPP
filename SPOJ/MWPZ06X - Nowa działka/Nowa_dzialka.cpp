#include <iostream>
using namespace std;

int X, quanity;
int main()
{
    cin>> quanity;
    for(int i=1; i<=quanity; i++)
    {
        cin>>X;
        cout<<X*X <<endl;
    }
}