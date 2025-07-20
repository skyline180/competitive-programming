#include <iostream>
using namespace std;

int main() {
    int  a, b, c, d;
    cin >> a >> b >> c >> d;

    unsigned long long int l = (unsigned long long int)((a%100) * (b%100) * (c%100) * (d%100)) % 100;
    if(l/10==0){
        cout<<"0"<<l;
    }
    else{
            cout << l << endl;

    }

    return 0;
}

