#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        int integer[4];
        for(int i=0;i<4;i++){
            cin >> integer[i];
        }
        
        int count = 0;
        
        for(int i=0;i<4;i++){
            if(integer[i] > integer[0]){
                count++;
            }
        }
        
        
        cout << count << endl;
    }

    return 0;
}