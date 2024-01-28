class Solution {
    private:
    int helper(int ind,vector<int> &dp){
        if (ind==0 or ind==1) return 1;
        if (dp[ind]!=-1) return dp[ind];
        int one = helper(ind-1,dp);
        int two = helper(ind-2,dp);

        return dp[ind] = one + two;

    }

public:
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return helper(n,dp);
        
    }
};