#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x[n];
    for(int i=0; i< sizeof(x)/sizeof(x[0]); i++){
        cin >> x[i];
    }

    int countEven=0, countOdd=0, countPositive=0, countNegative=0;

    for(int a: x){
        if(a%2==0)  countEven++;
        else countOdd++;
        if(a!=0){
            if(a>0)    countPositive++;
            else    countNegative++;
        }
        //else    return -1;
    }

    cout << "Even: " << countEven << endl;
    cout << "Odd: " << countOdd << endl;
    cout << "Positive: " << countPositive << endl;
    cout << "Negative: " << countNegative << endl;

    return 0;
}
