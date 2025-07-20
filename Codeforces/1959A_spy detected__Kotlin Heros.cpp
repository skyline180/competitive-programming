#include <iostream>
using namespace std;

int findUniqueIndex(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        if (arr[i] != arr[i - 1]) {
            return i + 1; // Return index of the element that is not equal to others
        }
    }
    return -1; // If no such element is found
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of the array

        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i]; // Array elements
        }

        int uniqueIndex = findUniqueIndex(arr, n);
        cout << uniqueIndex << endl;
    }

    return 0;
}
