#include <iostream>
#include <string> // Include the string library
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string password, sortedPassword;
        cin >> password;

        if(password.length() > n) {
            cout << "Error: String length exceeds specified length " << n << endl;
        } else {
            sortedPassword = password;
            sort(sortedPassword.begin(), sortedPassword.end()); // sorting the string
        }

        if(password == sortedPassword){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
