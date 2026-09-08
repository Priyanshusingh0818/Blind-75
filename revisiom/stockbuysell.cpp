#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
        int smallest = INT_MAX;
        int maxprofit = 0;

        for(int i=0;i<prices.size();i++){
            smallest = min(smallest, prices[i]);
            maxprofit = max(maxprofit, prices[i]-smallest);
        }
        return maxprofit;
    }