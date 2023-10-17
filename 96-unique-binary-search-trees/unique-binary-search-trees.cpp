class Solution {
    private:
    int helper(int pivot, int j,vector<vector<int>>&dp){
        if (pivot >= j) return 1;
        if (dp[pivot][j] != -1) return dp[pivot][j];
        int res=0;
        for (int k = pivot;k<=j;k++){
           res += helper(pivot,k-1,dp) * helper(k+1,j,dp);
        }

        return dp[pivot][j] = res;
        

    }
public:
    int numTrees(int n) {
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        int pivot = 1;
        return helper(1,n,dp);
        
    }
};