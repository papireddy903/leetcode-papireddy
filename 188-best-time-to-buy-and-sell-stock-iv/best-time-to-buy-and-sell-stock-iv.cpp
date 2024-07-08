class Solution {
    private:

    int helper(int ind, int transactions, vector<vector<int>>&dp, vector<int> &prices,int k){
        if (ind==prices.size() or transactions==2*k) return 0;
    
        if (dp[ind][transactions]!=-1) return dp[ind][transactions];

        if (transactions%2==0){
            return dp[ind][transactions] = max(-prices[ind]+helper(ind+1, transactions+1, dp,prices,k), helper(ind+1,transactions,dp,prices,k));
        }
        else{
            return dp[ind][transactions] = max(prices[ind]+helper(ind+1,transactions+1,dp,prices,k), helper(ind+1,transactions,dp,prices,k));
        }
        return 0;
    }
public:
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        // vector<vector<vector<int>>> dp(n, vector<vector<int>> (2, vector<int> (3,-1)));

        vector<vector<int>> dp(n, vector<int> (2*k, -1));

        return helper(0,0,dp, prices,k);
        
    }
};