class Solution {
    private:

    int helper(int ind, int buy, int cap, vector<vector<vector<int>>>&dp, vector<int> &prices){
        if (ind==prices.size() or cap==0) return 0;
    
        if (dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];

        if (buy==1){
            return dp[ind][buy][cap] = max(-prices[ind]+helper(ind+1, 0, cap, dp,prices), helper(ind+1,1,cap,dp,prices));
        }
        else{
            return dp[ind][buy][cap] = max(prices[ind]+helper(ind+1,1,cap-1,dp,prices), helper(ind+1,0,cap,dp,prices));
        }
        return 0;
    }

public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        // vector<vector<vector<int>>> dp(n+1, vector<vector<int>> (2, vector<int> (3,0)));

        // return helper(0,1,2,dp, prices);

        vector<vector<int>> cur(2, vector<int> (3,0));
        vector<vector<int>> after(2, vector<int> (3,0));

        for (int i = n-1;i>=0;i--){
            for (int buy=0;buy<=1;buy++){
                for (int cap=1;cap<=2;cap++){
                    if (buy == 1){
                        cur[buy][cap] = max(-prices[i]+after[0][cap], after[1][cap]);
                    }
                    else{
                        cur[buy][cap] = max(prices[i] + after[1][cap-1],after[0][cap]);
                    }
                    
                }
            }
            after = cur;

        }
        return cur[1][2];

        
    }
};