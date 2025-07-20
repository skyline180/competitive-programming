#include<iostream>
using namespace std;

int main() {
    int n;
    while(cin >> n){
        if(n==1)
        break;

    if(n%2!=0)
        n = 3*n + 1;
    else
        n = n/2;
    }


    return 0;
}
