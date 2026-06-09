#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
        unordered_map<int,int> mp;
        vector<vector<int>> ans;
        
        for(int num : arr){
            mp[num]++;
        }
        for(auto &it : mp){
            ans.push_back({it.first, it.second});
        }
        return ans;
        
    }
};