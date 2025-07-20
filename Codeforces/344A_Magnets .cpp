#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string magnets[n];

    for (int i = 0; i < n; ++i) {
        cin >> magnets[i];
    }

    int groupCount = 1;

    for (int i = 1; i < n; ++i) {
        // Check if the current magnet is different from the previous one
        if (magnets[i] != magnets[i - 1]) {
            ++groupCount;
        }
    }

    cout << groupCount << endl;

    return 0;
}
