#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    double n;
    cin >> n;

    if(floor(n) == n){
        cout << "int " << n << endl;
    }
    else{
        double intPart;
        double fracPart = modf(n, &intPart);
        /*
        The modf() function is used to split the number n into its integer and fractional parts.
        It returns the fractional part and stores the integer part in the variable intPart.

        The modf() function takes two arguments: the number whose parts are to be extracted (n in this case),
        and a pointer to a variable where the integer part will be stored (&intPart). The & operator is used
        to get the address of the intPart variable.

        The variable fracPart is declared as a double and assigned the value of the fractional part returned by modf().
        */
        cout << "float " << static_cast<int>(intPart) << " " << fracPart << endl;
    }

    return 0;
}
