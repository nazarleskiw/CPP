#include <iostream>

using namespace std;

void printNTimes(char c, int n)
{
    cout << string(n, c) << endl;
}

int main()

{

int n = 6;
char c = '*';

    for (int i=0; i <=n; i++)
    {
    printNTimes(c, i);
    }
}




