/*

#include <iostream>
using namespace std;

int main()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    string s;
    cin >> s;

    int total_calories = 0;

    for(int i=0; i<s.length(); i++){
        if(s[i] == '1'){
            total_calories+=a1;
        }
        else if(s[i] == '2'){
            total_calories+=a2;
        }
        else if(s[i] == '3'){
           total_calories+=a3;
        }
        else{
            total_calories+=a4;
        }
    }

    cout << total_calories << endl;

    return 0;
}

*/

//----------------------Using map-------------------------//

#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Define a map to store calorie values for each strip
    map<char, int> calorie_map;
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    // Populate the map
    calorie_map['1'] = a1;
    calorie_map['2'] = a2;
    calorie_map['3'] = a3;
    calorie_map['4'] = a4;

    string s;
    cin >> s;

    int total_calories = 0;

    // Iterate through the string and calculate total calories
    for(int i=0; i<s.length(); i++){
        // Use the map to fetch calorie value for the current strip
        total_calories += calorie_map[s[i]];
    }

    cout << total_calories << endl;

    return 0;
}
