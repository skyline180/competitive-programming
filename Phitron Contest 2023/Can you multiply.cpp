#include <iostream>

using namespace std;

// Function to find the last two digits of the product
int lastTwoDigitsProduct(long long A, long long B) {
    return (A * B) % 100;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        long long A, B;
        cin >> A >> B;

        // Calculate and print the last two digits of the product
        cout << lastTwoDigitsProduct(A, B) << endl;
    }

    return 0;
}

