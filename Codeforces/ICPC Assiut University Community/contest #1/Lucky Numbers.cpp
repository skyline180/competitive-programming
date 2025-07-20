#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int firstDigit = n / 10;
    int secondDigit = n % 10;

    if((secondDigit == 0) || firstDigit % secondDigit == 0 || secondDigit % firstDigit == 0){
        cout << "YES" << endl;
    }
     else {
        cout << "NO" << endl;
    }

    return 0;
}
