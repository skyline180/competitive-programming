#include<iostream>
#include<cctype>
using namespace std;

int main()
{
    int a, b;
    char s;

    cin >> a >> s >> b;

    switch(s){
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            cout << a/b << endl;
            break;
    }

    return 0;
}





