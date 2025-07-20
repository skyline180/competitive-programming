#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int luckyDigitsCount = 0;
    while (n > 0) {
        int digit = n % 10;
        if (digit == 4 || digit == 7) {
            luckyDigitsCount++;
        }
        n /= 10;
    }

    if (luckyDigitsCount == 4 || luckyDigitsCount == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
