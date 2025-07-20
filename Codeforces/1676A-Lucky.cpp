#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        string stringDigit;
        cin >> stringDigit;
        
        int firstThree = stringDigit[0]+stringDigit[1]+stringDigit[2];
        int lastThree = stringDigit[3]+stringDigit[4]+stringDigit[5];
        
            if(firstThree == lastThree){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }

    }

    return 0;
}
