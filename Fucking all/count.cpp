#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDuplicates(vector<int>& arr) {

        unordered_map<int, int> mp;

        int count = 0;

        // Store frequency
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        // Count distinct duplicate elements
        for (int i = 0; i < arr.size(); i++) {

            if (mp[arr[i]] > 1) {
                count++;
                mp[arr[i]] = 0;
            }

        }

        return count;
    }
};