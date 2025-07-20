#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    char X;
    cin >> X;

    if(X>='a' && X<='z'){
        char up = X-32;
        cout << up << endl;
    }else if(X>='A' && X<='Z'){
        char low = X+32;
        cout << low << endl;
    }

    return 0;
}




