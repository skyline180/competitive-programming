#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int a;
    cin >> a;
    vector<int> ans;
    for(int i=0;i<a;i++){
        int k;
        cin>>k;
        ll sum=0;
        vector<int>v(k);
        for(int j=0;j<k;j++){
            cin>>v[j];
            sum=sum+v[j];
        }
        int count=0;
        if(sum%k==0){
            for(int j=0;j<k;j++){
                if(v[j]>(sum/k))
                    count++;
            }
            ans.push_back(count);
        }
        else{
            ans.push_back(-1);
            }
    }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<endl;
        }
        return 0;
    }

