#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
// //         for(int i=0;i<nums.size();i++){
// //             for(int j=i+1;j<nums.size();j++){
// //                 if(nums[i]+nums[j]==target){
// //                     return {i,j};
// //                 }
// //             }
// //         }
// //         return {};
//         BRUTE FORCE METHOD
// //     }
// // };

unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            // check if complement already exists
            if(mp.find(complement) != mp.end()) {
                return {mp[complement], i};
            }

            // store current number with index
            mp[nums[i]] = i;
        }

        return {};
    }
};