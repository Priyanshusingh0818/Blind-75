#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    unordered_map<int,int> mp;
    int count =0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp[arr[i]]>1){
            count++;

            mp[arr[i]] =0;
        }
    }
    cout<<count;

    return 0;}