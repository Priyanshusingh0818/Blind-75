#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        int n = arr.size();

        if(n==0){
            return -1;
        }
        int largest = arr[0];
        for(int i =0;i<n;i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return largest;
        
    }
};
