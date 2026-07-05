#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int countPerfectSquares(vector<int>& nums) {
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        int root = sqrt(nums[i]);

        if (root * root == nums[i]) {
            count++;
        }
    }

    return count;
}