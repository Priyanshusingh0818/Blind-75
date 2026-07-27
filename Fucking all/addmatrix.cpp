#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// User function Template for C++

class Solution {
  public:
    void Addition(vector<vector<int>>& matrixA, vector<vector<int>>& matrixB,vector<vector<int>>& C) {
        
        int n = matrixA.size();
        int m = matrixA[0].size();

        for(int i = 0; i<n;i++){
            for(int j = 0;j<m;j++){
                C[i][j] = matrixA[i][j] + matrixB[i][j];

            }
        }
    }
};