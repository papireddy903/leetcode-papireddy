class Solution {
    private:
    bool helper(int n, vector<int> &dp){
        if (n<=3){
            return true;
        }

        if (dp[n]!=-1){
            return dp[n];
        }

        if (helper(n-1,dp) && helper(n-2,dp) && helper(n-3,dp)){
            return dp[n] = false;
        }
        else{
            return dp[n] = true;
        }

    }
public:
    bool canWinNim(int n) {

        if (n > 10000000) return n % 4 != 0;

        vector<int> dp(n+1, -1);
        
        return helper(n,dp);


        
    }
};