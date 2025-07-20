#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of stones
    string stones;
    cin >> stones; // Colors of the stones

    int count = 0;
    for (int i = 1; i < n; ++i) {
        if (stones[i] == stones[i - 1]) {
            count++; // Increment count if current stone has same color as previous stone
        }
    }

    cout << count << endl;

    return 0;
}
