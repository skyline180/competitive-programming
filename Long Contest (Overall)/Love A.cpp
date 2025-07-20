#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for(char c: s){
        if(c == 'a'){
            count++;
        }
    }

    int half_count_a = count / 2;

    int max_length = 0;
    int current_length = 0;

    for(char c: s){
        if(c == 'a'){
            current_length++;
            if(current_length > half_count_a){
                max_length = max(max_length, current_length);
            }
        }else{
            current_length = 0;
        }
    }

    cout << max_length * 2 << endl;

    return 0;
}
