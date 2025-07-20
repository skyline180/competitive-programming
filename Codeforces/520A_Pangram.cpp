#include <bits/stdc++.h>
using namespace std;

bool isPangram(const string& str) {
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    // Convert input string to lowercase
    string lowerStr = str;
    transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);

    // Check if all alphabet characters are present
    for (char c : alphabet) {
        if (lowerStr.find(c) == string::npos) {
            return false; // If any letter is missing, return false
        }
    }

    return true; // All letters are present
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n; // Read the expected size of the string (not used in the logic)

    cin.ignore(); // Clear the newline character from the input buffer

    string inputString;
    getline(cin, inputString); // Read the actual string input

    if (isPangram(inputString)) {
        cout << "YES" << endl; // Output YES if it's a pangram
    } else {
        cout << "NO" << endl; // Output NO if it's not
    }

    return 0;
}
