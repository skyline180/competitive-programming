// CSES Probelm: Mathematics - Exponentiation
//-------------------------------------------------------------------//


#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    while (n--) {
        int a, b;
        cin >> a >> b;
        cout << modular_exponentiation(a, b) << endl;
    }

    return 0;
}


