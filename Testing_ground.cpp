#include "Testing_ground.h"
#include <iostream>
#include <cmath>

using namespace std;

Testing_ground::Testing_ground()
{
    float a;
    float p = 10000;
    float r = .01;

    for (int day = 1;day <= 20; day++) {
        a = p * pow(1 + r, day);
        
        if (day < 10) {
            cout << day << "  --- " << a << endl;
        }else {
            cout << day << " --- " << a << endl;
        }
    }

}