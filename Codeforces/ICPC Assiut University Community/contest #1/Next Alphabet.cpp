#include <iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;

    //The isalpha() function returns true (nonzero) if c is alphabetics
    if(isalpha(x)){
        if(x == 'z')
            cout << 'a';
        else
            cout << (char)(x+1);
    }

    return 0;
}
