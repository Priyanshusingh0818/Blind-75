#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n = arr.size();

        if(n<2)
        return {-1};

        int first = __INT_MAX__;
        int second = __INT_MAX__;


        for(int i = 0; i<n;i++){
            if(arr[i]<first){
                second = first;
                first = arr[i];
            }
            else if(arr[i]<second && arr[i]!=first){
                second = arr[i];
            }
        }
        if(second==__INT_MAX__)
        return {-1};

        return {first, second};
        
    }
};