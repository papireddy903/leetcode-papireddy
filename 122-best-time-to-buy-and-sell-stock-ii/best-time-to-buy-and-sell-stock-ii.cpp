class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0 ;
        int cur_price = prices[0];

        for (int i = 1;i<prices.size();i++){
            if (prices[i] > cur_price){
                profit += prices[i] - cur_price;
            }
            cur_price = prices[i];
        }
        return profit;
        
    }
};