#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    // Read the number of test cases
    cin >> T;

    // Define the message that needs to be printed
    string message = "Ei Matha-Mota-Rogchota joddin achhe, non-profit diye kon ghaash ta katbo!";

    // Output the message T times
    for (int i = 0; i < T; ++i) {
        cout << message << endl;
    }

    return 0;
}
