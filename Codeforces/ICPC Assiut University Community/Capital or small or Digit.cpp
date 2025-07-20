#include<iostream>
#include<string>
using namespace std;

int main()
{
    char letter;
    cin >> letter;

    if(letter>=65 && letter<=90){
        cout << "ALPHA" << endl << "IS CAPITAL" << endl;
    }else if(letter>=97 && letter<=122){
        cout <<"ALPHA" << endl << "IS SMALL" << endl;
    }else{
        cout << "IS DIGIT" << endl;
    }

    return 0;
}




