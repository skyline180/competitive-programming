#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        string word;
        cin >> word;

        int wordSize = word.length();
        char firstLetter = word[0];
        char lastLetter = word[word.length() - 1];


        if(wordSize <= 10){
            cout << word << endl;
        }

        else if(wordSize > 10){
            cout << firstLetter + to_string(wordSize - 2) + lastLetter << endl;
        }
    }

    return 0;
}
