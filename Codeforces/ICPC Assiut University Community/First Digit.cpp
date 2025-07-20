#include<iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while(x>=10){
        x /= 10;
    }

    int firstDigit = x;

    if(firstDigit%2 == 0){
        cout << "EVEN" << endl;
    }else{
        cout << "ODD" << endl;
    }

    return 0;
}
