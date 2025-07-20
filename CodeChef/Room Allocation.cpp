#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int N;
        cin >> N; // Number of colleges
        int teamSizes[N];
        for (int i = 0; i < N; ++i) {
            cin >> teamSizes[i]; // Team sizes for each college
        }

        // Sort team sizes in non-increasing order
        sort(teamSizes, teamSizes + N, greater<int>());

        // Calculate rooms needed
        int roomsNeeded = 0;
        for (int i = 0; i < N; ++i) {
            roomsNeeded += (teamSizes[i] + 1) / 2; // Add rooms needed for each team
        }

        // Output result
        cout << roomsNeeded << endl;
    }
    return 0;
}
