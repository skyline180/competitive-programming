#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x, p;
    cin >> x >> p;

    x = x/100;
    double op = p / (1-x);

    cout << fixed << setprecision(2) << op << endl;

    return 0;
}

