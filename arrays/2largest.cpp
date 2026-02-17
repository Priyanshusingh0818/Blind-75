#include <iostream>
#include <vector>
#include <unordered_set>
#include <climits>
using namespace std;

class Solution {
public:
    int secondLargest(vector<int> &a, int n) {

        if(n < 2) return -1;

        int largest = a[0];
        int slargest = INT_MIN;

        for(int i = 1; i < n; i++) {

            if(a[i] > largest) {
                slargest = largest;
                largest = a[i];
            }
            else if(a[i] < largest && a[i] > slargest) {
                slargest = a[i];
            }
        }

        if(slargest == INT_MIN) return -1;

        return slargest;
    }
};
