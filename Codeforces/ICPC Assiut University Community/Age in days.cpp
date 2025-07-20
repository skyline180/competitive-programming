#include<iostream>
using namespace std;

int main()
{
    long int n; //age n in days
    cin >> n;

    int y,m,d;

    y = n / 365;

    int remain_days = (n % 365);
    m = remain_days / 30;

    d = remain_days % 30;

    cout << y << " years" << endl;
    cout << m << " months" << endl;
    cout << d << " days" << endl;

    return 0;
}
