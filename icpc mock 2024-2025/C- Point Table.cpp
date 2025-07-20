#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

bool isValidTable(int PA, int PB, int PC) {
    // The total points should be exactly 12
    int totalPoints = PA + PB + PC;
    if (totalPoints != 12) {
        return false;
    }

    // Now we check if the points can correspond to valid match results
    // Possible outcomes of the 3 matches:
    // 1. A beats B, A beats C, B beats C => (PA=6, PB=3, PC=3)
    // 2. A beats B, A draws C, B beats C => (PA=5, PB=3, PC=4)
    // 3. A beats B, A draws C, B draws C => (PA=4, PB=4, PC=4)
    // 4. A draws B, A beats C, B beats C => (PA=4, PB=3, PC=5)
    // 5. A draws B, A draws C, B draws C => (PA=3, PB=3, PC=6)
    // 6. A loses to B, A beats C, B beats C => (PA=3, PB=3, PC=6)
    // 7. A loses to B, A loses to C, B wins all => (PA=0, PB=6, PC=6)

    // Valid configurations:
    vector<vector<int>> validOutcomes = {
        {6, 3, 3}, {5, 3, 4}, {4, 4, 4}, {4, 3, 5}, {3, 3, 6}
    };

    // Check if the input matches any of the valid outcomes
    vector<int> points = {PA, PB, PC};
    sort(points.begin(), points.end());  // Sort the points for easy comparison1
    for (const auto& outcome : validOutcomes) {
        if (outcome == points) {
            return true;
        }
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    for (int t = 1; t <= T; ++t) {
        int PA, PB, PC;
        cin >> PA >> PB >> PC;

        // Check if the point table is valid or invalid
        if (isValidTable(PA, PB, PC)) {
            cout << "Case " << t << ": perfectus" << endl;
        } else {
            cout << "Case " << t << ": invalidum" << endl;
        }
    }

    return 0;
}
