#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string ab;
        cin >> ab;
        int n = ab.length();

        bool found = false;
        for (int i = 1; i < n; ++i) {
            string a_str = ab.substr(0, i);
            string b_str = ab.substr(i);

            // Check if both numbers have no leading zero and are strictly greater than 0
            if (a_str[0] != '0' && b_str[0] != '0') {
                int a = stoi(a_str);
                int b = stoi(b_str);

                // Check if b > a
                if (b > a) {
                    cout << a << " " << b << endl;
                    found = true;
                    break;
                }
            }
        }
        if (!found)
            cout << -1 << endl;
    }

    return 0;
}
