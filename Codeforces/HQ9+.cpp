/*
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string p;
    cin >> p;

    int flag = 0;

    for(char s: p){
        if(s>=33 && s<=126){
            if(s=='H' || s=='Q' || s=='9'){
                flag = 1;
            }
        }
    }

    if(flag){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }



    return 0;
}
*/


//-----------------------------other way----------------------------------------------//


#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string p;
    cin >> p;

    for(char s: p){
        if(s=='H' || s=='Q' || s=='9'){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}

