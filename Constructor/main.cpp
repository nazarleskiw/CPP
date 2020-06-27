#include <iostream>
#include <cstring>
#include "comparison.h"
#include "class.h"
using namespace std;


int main(void)
{

    Player pierwszy("first player name",0 ,0);
    cout<<"Player one:"<< endl;
    pierwszy.addPlayer();

    Player drugi("second player name",0 ,0);
    cout<<"Player two:"<< endl;
    drugi.addPlayer();

    Player drugiCopy(drugi);


    cout<<"-------------"<< endl;
    pierwszy.showData();
    drugi.showData();
    cout<<"Player two copy with changed value:"<< endl;
    drugiCopy.value = 0;
    drugiCopy.showData();

    cout<<"-------------"<< endl;
    cout<<"Compare players values: "<< endl;
    cout << compare(pierwszy.value, drugi.value)<< endl;
    cout<<"-------------"<< endl;
    cout<<"Compare players scores: "<< endl;
    cout << compare(pierwszy.score, drugi.score)<< endl;
    return 0;
}



