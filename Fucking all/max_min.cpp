#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

pair<int, int> findMaxMin(vector<int>& nums) {

    int maximum = nums[0];
    int minimum = nums[0];

    for (int i = 1; i < nums.size(); i++) {

        if (nums[i] > maximum) {
            maximum = nums[i];
        }
 
        if (nums[i] < minimum) {
            minimum = nums[i];
        }
    }

    return {maximum, minimum};
}