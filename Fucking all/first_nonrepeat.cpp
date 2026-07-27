#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int firstNonRepeating(vector<int>& arr) {

        unordered_map<int, int> mp;
        int n = arr.size();

        // Count frequency
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        // Find first non-repeating element
        for (int i = 0; i < n; i++) {
            if (mp[arr[i]] == 1) {
                return arr[i];
            }
        }

        return -1;
    }
};