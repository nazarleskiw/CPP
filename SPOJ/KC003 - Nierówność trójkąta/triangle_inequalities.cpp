#include <iostream>
using namespace std;

double a, b, c ;

int main()
{
    while( cin >> a >> b >> c)
        if(((a+b>c)&&(a+c>b))&&(b+c>a))
        {
            cout << "1" << endl;
        }
        else
        {
            cout<<"0"<<endl;
        }   
}
	