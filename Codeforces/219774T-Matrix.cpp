#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    int primaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += matrix[i][i];
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        secondaryDiagonalSum += matrix[i][n - i - 1];
    }

    int absoluteDifference = abs(primaryDiagonalSum - secondaryDiagonalSum);
    cout << absoluteDifference << endl;

    return 0;
}
