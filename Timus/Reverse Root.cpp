#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;

    double root_of_a = sqrt(a);
    double root_of_b = sqrt(b);
    double root_of_c = sqrt(c);
    double root_of_d = sqrt(d);

    cout << fixed << setprecision(4) << root_of_d << endl;
    cout << fixed << setprecision(4) << root_of_c << endl;
    cout << fixed << setprecision(4) << root_of_b << endl;
    cout << fixed << setprecision(4) << root_of_a << endl;

    return 0;
}
