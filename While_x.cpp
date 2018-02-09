#include "While_ex.h"
#include <iostream>

using namespace std;


While_ex::While_ex()
{
    int x = 1;
    int number;
    int total = 0;

    while(x <= 5) {
        cout << "enter a number: " << endl;
        cin >> number;
        total = total + number;
        x++;
    };
    cout << "your total = " << total << endl;
};