#include <bits/stdc++.h>

using namespace std;


/*
 * Complete the 'solve' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. LONG_INTEGER n
 *  2. INTEGER m
 */

int solve(long n, int m) {
    long long a_n = 0;
    a_n = (pow(10, n) - 1 ) / 9;

    int result = 0;
    result = a_n % m;

    return result;
}

int main()
{
    int t;
    cin >> t;

    while(t--){
        long n, m;
        cin >> n >> m;

        solve(n, m);
    }

    return 0;
}



