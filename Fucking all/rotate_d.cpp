#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        for(int i =0;i<d;i++){
            int first = arr[0];
            for(int j = 0;j<n-1;j++){
                arr[j] = arr[j+1];
            }
            arr[n-1] = first;
        }
        
    }
};