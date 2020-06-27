#include <iostream>
using namespace std;

char x;
int i;

int main()
{
    string tekst;
    while(getline(cin, tekst))
    {
        string nowy="";
        x= tekst[0];
        tekst.erase(0,2);
        for (i=0; i<tekst.length(); i++)
        {
            if(tekst[i]!=x) 
            {
                nowy += tekst[i];
            }
        }
        cout << nowy<< endl;
    }
    return 0;
}
	