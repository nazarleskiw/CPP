#pragma once
#include <cmath>
#include <iostream>

using namespace std;
bool compare(float f1, float f2)
{

    float precision = 0.01;
    if (((f1 - precision) < f2) &&  ((f1 + precision) > f2))
    {
        cout<<"Floats are equal"<< endl;
        return 1;

    }
    else
    {
        cout<<"Floats are not equal"<< endl;
        return 0;
    }
}
