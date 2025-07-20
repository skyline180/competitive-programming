#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int uppercaseCount = 0, lowercaseCount = 0;

    //count upper case and lower case letter
    for(char c: word){
        if(isupper(c)){
            uppercaseCount++;
        }else{
            lowercaseCount++;
        }
    }

    //Conversion
    if(uppercaseCount>lowercaseCount){
        for(char &c: word){
            c = toupper(c);
        }
    }
    else{
        for(char &c: word){
            c = tolower(c);
        }
    }

    cout << word << endl;

    return 0;
}
