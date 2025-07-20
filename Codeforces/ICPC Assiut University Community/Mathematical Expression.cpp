#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    char s, e;
    cin >> a >> s >> b >> e >> c;

    switch(s){
        case '+':
            if(a+b == c)
                cout << "Yes" << endl;
            else
                cout << a+b << endl;
            break;
        case '-':
            if(a-b == c)
                cout << "Yes" << endl;
            else
                cout << a-b << endl;
            break;
        case '*':
            if(a*b == c)
                cout << "Yes" << endl;
            else
                cout << a*b << endl;
            break;
        case '/':
            if(a/b == c)
                cout << "Yes" << endl;
            else
                cout << a/b << endl;
            break;
    }

    return 0;
}

