#include<iostream>
#include<string>
using namespace std;

int main()
{
    string person1, person2;
    getline(cin, person1);
    getline(cin, person2);

    //Find the position of the last space in each string
    size_t pos1 = person1.find_last_of(" ");
    size_t pos2 = person2.find_last_of(" ");

    //Extract last names using substr
    string lastName1 = person1.substr(pos1 + 1);
    string lastName2 = person2.substr(pos2 + 1);

    //Compare last name
    if(lastName1 == lastName2){
        cout << "ARE Brothers" << endl;
    }else{
        cout << "NOT" << endl;
    }



    return 0;
}



