#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases

    // Process each test case
    while (t--) {
        string s;
        cin >> s; // Read the string

        int count_A = 0, count_B = 0;
        for (char ch : s) {
            if (ch == 'A')
                count_A++;
            else
                count_B++;
        }

        // Output the most frequent character
        if (count_A > count_B)
            cout << 'A' << endl;
        else if (count_B > count_A)
            cout << 'B' << endl;
        else
            // If counts are equal, output any character (e.g., 'A' or 'B')
            cout << 'A' << endl;
    }

    return 0;
}
