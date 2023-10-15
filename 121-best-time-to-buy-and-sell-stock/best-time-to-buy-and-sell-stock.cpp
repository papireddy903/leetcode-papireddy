class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int maxP = 0;
        int mini = prices[0];

        for (int i = 1;i<n;i++){
            int cost = prices[i] - mini;
            maxP = max(cost,maxP);
            mini= min(prices[i],mini);
        }
        return maxP;


    }
};