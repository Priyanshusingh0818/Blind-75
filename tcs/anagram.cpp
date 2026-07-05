#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;

    if(s.length()!=t.length()){
        cout<<"False";
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}