#include <iostream>
#include <algorithm> // Include the <algorithm> header

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B, C;
        cin >> A >> B >> C;

        // Find the maximum and minimum among A, B, and C
        int max_val = max({A, B, C});
        int min_val = min({A, B, C});

        int diff = max_val - min_val;
        cout << diff << endl;
    }

    return 0;
}
