#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int i = 0; i < nums.size(); i++) {
            if (s.count(nums[i])) {
                return true;   // duplicate found
            }
            s.insert(nums[i]);
        }
        return false;  // no duplicates
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 1};

    if (sol.hasDuplicate(nums)) {
        cout << "Duplicate found" << endl;
    } else {
        cout << "No duplicates" << endl;
    }

    return 0;
}
