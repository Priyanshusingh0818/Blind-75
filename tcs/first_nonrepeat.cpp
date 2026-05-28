#include<iostream>
#include<vector>
using namespace std;

class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        // code here
        int n = arr.size();
        for(int i=0;i<n;i++){
            int j;
            for(j=i+1;j<n;j++){
                if(arr[i]==arr[j])
                break;
            }
            if(j==n)
            return arr[i];
        }
        return 0;
    }
};
    