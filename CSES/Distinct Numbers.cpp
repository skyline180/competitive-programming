// CSES Probelm: Distinct Numbers
//-------------------------------------------------------------------//

//submitted one
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    // Sort the array
    sort(array.begin(), array.end());

    // Count distinct values
    int distinctCount = 1;  // There's at least one element

    for (int i = 1; i < n; i++) {
        if (array[i] != array[i - 1]) {  // Check if current is different from previous
            distinctCount++;
        }
    }

    cout << distinctCount << endl;

    return 0;
}







//not submitted
//Using set
#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
set<int> s;
 
int n;
cin>>n;
 
	for(int i=0;i<n;i++){
		
		int k;
		cin>>k;
		s.insert(k);	
	}
 
cout<<s.size()<<endl;
}
