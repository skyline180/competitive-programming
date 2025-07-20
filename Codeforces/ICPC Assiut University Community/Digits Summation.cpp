#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    int sumOfLastDigits = (n%10) + (m%10);

    cout << sumOfLastDigits << endl;

    return 0;
}



