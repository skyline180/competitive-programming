#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        string S;
        cin >> S;

        for(int i=0; i<S.size(); i+=2){
            cout << S[i];
        }
        cout << " ";
        for(int i=1; i<S.size(); i+=2){
            cout << S[i];
        }

        cout << endl;
    }
    return 0;
}
