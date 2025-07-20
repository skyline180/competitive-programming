#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long  a, b, c, d;
    cin >> a >> b >> c >> d;

    //long long a_ToThePower_b = pow(a, b);
    //long long c_ToThePower_d = pow(c, d);

    if(b*log(a)  > d*log(c)){   //to avoid precision we have to use log()
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}


