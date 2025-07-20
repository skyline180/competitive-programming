#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long p1, p2, p3, p4, p5, p6, p7, p8, p9, p10,p11,p12,p13;
    p1 = a+b+c;
    p2 = a+b-c;
    p3 = a-b+c;
    p4 = a-b-c;

    p5 = a+b*c;
    p6 = a*b+c;
    p7 = a-b*c;
    p8 = a*b-c;
    p9 = a*b*c;

    p10 = (a+b)*c;
    p11 = a*(b+c);
    p12 = (a-b)*c;
    p13 = a*(b-c);

    if(p1==d || p2==d || p3==d || p4==d || p5==d || p6==d || p7==d || p8==d || p9==d || p10==d || p11==d || p12==d || p13==d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

