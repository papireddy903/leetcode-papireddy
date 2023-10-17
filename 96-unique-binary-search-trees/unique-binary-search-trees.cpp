class Solution {
    private:
    int helper(int pivot,int j, vector<vector<int>> &dp){
        if (pivot >= j) return 1;
        if (pivot )
        if (dp[pivot][j]!=-1) return dp[pivot][j];
        int ans = 0;
        for (int k = pivot;k<=j;k++){
            ans += helper(pivot,k-1,dp) * helper(k+1,j,dp);
        }
        return dp[pivot][j] = ans;
    }
public:
    int numTrees(int n) {

        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        int pivot = 1;
        return helper(pivot,n,dp);
        
    }
};