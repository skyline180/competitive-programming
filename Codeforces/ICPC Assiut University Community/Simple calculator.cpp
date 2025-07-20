#include <iostream>
using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    int summation = x+y;
    int subtraction = x-y;
    int multiplication = x*y;

    cout << x << " + " << y << " = " << summation << endl;
    cout << x << " * " << y << " = " << multiplication << endl;
    cout << x << " - " << y << " = " << subtraction << endl;

    return 0;
}

