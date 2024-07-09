class Solution {
    private:
    int helper(int ind, vector<int> &coins, int amount, vector<vector<int>> &dp){
        if (ind==0){
            if (amount % coins[ind] == 0) {
                return amount / coins[ind];
            }
            return 1e9;

        }

        if (dp[ind][amount]!=-1) return dp[ind][amount];

        int take = 1e9;
        int nottake = 0 + helper(ind-1,coins,amount,dp);
        if (coins[ind] <= amount)
        take = 1 + helper(ind,coins,amount-coins[ind],dp);

        return dp[ind][amount] = min(nottake, take);
    }
public:
    int coinChange(vector<int>& coins, int amount) {

        int n = coins.size();
        // vector<vector<int>> dp(n, vector<int> (amount+1,-1));
        // int ans =  helper(coins.size()-1, coins, amount,dp);


        // if (ans>=1e9) return -1;
        // return ans;
        vector<vector<int>> dp(n, vector<int> (amount+1,-1));

        for (int i = 0;i<=amount;i++){
            if (i%coins[0]==0){
                dp[0][i] = i/coins[0];
            }
            else{
                dp[0][i] = 1e9;
            }
        }

        
        for (int i = 1;i<n;i++){
            for (int j = 0;j<=amount;j++){
                int notake = dp[i-1][j];
                int take = 1e9;
                if (coins[i] <= j){
                    take = 1+dp[i][j - coins[i]];
                }
                dp[i][j] = min(take,notake);
            }

        }
        if (dp[n-1][amount] >= 1e9){
            return -1;
        }

        return dp[n-1][amount];
    }
};