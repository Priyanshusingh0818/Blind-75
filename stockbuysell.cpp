#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class solution {
    public:
    int maxProfit(vector<int>& prices){
        int smallest = INT_MAX;
        int maxProfit = 0;

        for(int i = 0;i<prices.size();i++){
            smallest = min(smallest,prices[i]);
            maxProfit = max(maxProfit,prices[i]-smallest);

        }
        return maxProfit;
    }
};