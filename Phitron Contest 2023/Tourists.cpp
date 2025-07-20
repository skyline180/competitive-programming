#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to check if it's possible to achieve a minimum distance using binary search
bool isPossible(const vector<int>& rooms, int n, int c, int mid) {
    int count = 1;
    int lastPosition = rooms[0];

    for (int i = 1; i < n; ++i) {
        if (rooms[i] - lastPosition >= mid) {
            count++;
            lastPosition = rooms[i];
        }
    }

    return count >= c;
}

// Function to find the maximum minimum distance
int maxMinDistance(const vector<int>& rooms, int n, int c) {
    vector<int> sortedRooms = rooms;
    sort(sortedRooms.begin(), sortedRooms.end());
    int left = 0;
    int right = sortedRooms[n - 1] - sortedRooms[0];
    int result = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (isPossible(sortedRooms, n, c, mid)) {
            result = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int N, C;
        cin >> N;
        vector<int> rooms(N);

        for (int i = 0; i < N; ++i) {
            cin >> rooms[i];
        }

        cin >> C;

        // Calculate and print the largest achievable distance
        int largestDistance = maxMinDistance(rooms, N, C);
        cout << largestDistance << endl;
    }

    return 0;
}

