#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int remainder = a%b;

        if(remainder != 0){
            int steps = b - remainder;
            cout << steps << endl;
        }
        else{
            cout << 0 << endl;
        }
    }

    return 0;
}
