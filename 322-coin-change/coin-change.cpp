class Solution {
    private:
    int helper(int ind, vector<int> &coins, int amount, vector<vector<int>> &dp){
        if (ind == 0){
            if (amount % coins[ind] == 0){
                return amount/coins[ind];
            }
            return 1e9;
        }
        if (dp[ind][amount]!=-1){
            return dp[ind][amount];
        }
        int take = 1e9;
        int nottake = 0 + helper(ind-1, coins, amount, dp);
        if (coins[ind] <= amount)
        take=  1 + helper(ind, coins, amount-coins[ind],dp);

        return dp[ind][amount] = min(nottake, take);
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
        int ans= helper(n-1, coins, amount, dp);
        if (ans>=1e9){
            return -1;
        }
        return ans;
        
    }
};