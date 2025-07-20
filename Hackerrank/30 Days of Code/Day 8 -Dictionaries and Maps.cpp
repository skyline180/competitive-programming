#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        map<string, int> phoneBook = {
            {"sam",99912222},
            {"tom",11122222},
            {"harry",12299933}
        };

        for(auto& iter: phoneBook){
            cout << iter.first << "  = " << iter.second<< endl;
        }
    }
    return 0;
}

