#include <iostream>

using namespace std;


void trompeta();
void print_int(int x);
int sum(int x, int y);

int main()
{

    kolion();
    print_int(20);
    cout << "sum is " << sum(20, 40) << endl;
    return 0;
}


void trompeta() {
    cout << "what is this!" << endl;
}
void print_int(int x) {
    cout << "num is " << x << endl;
}
int sum(int x, int y) {
    int total = x + y;
    return total;
}
