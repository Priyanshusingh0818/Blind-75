#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;

class solution{
    public:
    int romantoint(string s){
        unordered_map<int,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int sum = 0;
        for(int i=0;i<s.length()-1;i++){
            if(mp[s[i]]<mp[s[i+1]]){
                sum = sum - mp[s[i]];
            }
            else{
                sum = sum + mp[s[i]];
            }
        }
        sum = sum + mp[s[s.length()-1]];
        return sum;

    }

};