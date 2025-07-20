#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, c=0;
    cin >> n;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    m = a[n/2];

    for(int i=0; i<n; i++){
        while(a[i] >= a[m]){
            if(a[i] <= a[m])
                a[i]++;
                c++;
        }
    }

    cout << c << endl;

    return 0;
}
