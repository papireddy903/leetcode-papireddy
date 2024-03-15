class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0] , maxProfit = 0;
        int cost;
        int n = prices.size();

        for (int i = 1;i<n;i++){
            cost = prices[i] - mini;
            maxProfit = max(maxProfit, cost);
            mini = min(prices[i],mini);
        }
        return maxProfit;
        

        
    }
};