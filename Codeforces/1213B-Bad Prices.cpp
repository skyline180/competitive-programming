#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int a[n];
        for(int i=0; i<n;i++){
            cin >> a[i];
        }

        int count = 0,minimum=a[n-1];

        for(int i=n-2;i>=0;i--){
            if(a[i] > minimum){
                count++;
            }
            else{
                minimum = min(minimum,a[i]);
            }
        }

        cout << count << endl;
    }

    return 0;
}

