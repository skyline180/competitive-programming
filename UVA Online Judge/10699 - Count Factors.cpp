#include<bits/stdc++.h>
using namespace std;

void primeFact(int N){
    int ans=0;
    for(int i = 2; i*i <= N; i++){
        if(N%i == 0){
            ans++;
            while(N%i == 0){
                N/=i;
            }
        }
    }
    if(N>1)
        ans++;
    cout << ans << endl;
}

int main(){
    int n;
    while(cin>>n){
        if(n==0)
            break;
        cout << n << " : ";
        primeFact(n);
    }
    
    return 0;
}