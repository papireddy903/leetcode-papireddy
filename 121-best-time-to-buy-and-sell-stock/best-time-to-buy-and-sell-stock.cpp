class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();
        int maxProfit = 0;
        int cur = prices[0];

        for (int i = 1;i<n;i++){
            if (prices[i] < cur){
                cur = prices[i];
            }

            else if (prices[i] - cur > maxProfit){
                maxProfit = prices[i] - cur;
            }
        }
        return maxProfit;


    }
};