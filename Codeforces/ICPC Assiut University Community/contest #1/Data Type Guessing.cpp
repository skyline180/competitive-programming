#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned long long n, k, a;
    cin >> n >> k >> a;

    unsigned long long result = n * k / a;

    if (result <= UINT_MAX) {
        cout << "int" << endl;
    } else if (result <= ULLONG_MAX) {
        cout << "long long" << endl;
    } else {
        cout << "double" << endl;
    }

    return 0;
}

/*
//constants defined for other integer types in the <climits> header.
 Here are some commonly used ones:

CHAR_BIT: The number of bits in a char.
SCHAR_MIN: Minimum value for a signed char.
SCHAR_MAX: Maximum value for a signed char.
UCHAR_MAX: Maximum value for an unsigned char.
SHRT_MIN: Minimum value for a short.
SHRT_MAX: Maximum value for a short.
USHRT_MAX: Maximum value for an unsigned short.
INT_MIN: Minimum value for an int.
UINT_MAX: Maximum value for an unsigned int.
LONG_MIN: Minimum value for a long.
LONG_MAX: Maximum value for a long.
ULONG_MAX: Maximum value for an unsigned long.
LLONG_MIN: Minimum value for a long long.
LLONG_MAX: Maximum value for a long long.
ULLONG_MAX: Maximum value for an unsigned long long.

*/
