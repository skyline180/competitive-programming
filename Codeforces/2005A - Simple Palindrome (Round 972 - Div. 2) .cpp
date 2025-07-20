#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    cin >> n;
    
    long long fn = 0;
    
    if(n%2 == 0){
        fn = n / 2;
        cout << fn << endl;
    }
    else if(n%2 != 0){
        fn = - (n + 1) / 2;
        cout << fn << endl;
    }
    else{
        cout << -1 << endl;
    }

    return 0;
}