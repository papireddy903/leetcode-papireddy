class Solution {
    private:
    int helper(int i,int j,int m,int n,vector<vector<int>> &dp){
        if (i<0 or j<0) return 0;
        if (i== 0 or j==0) return 1;

        if (dp[i][j]!=-1) return dp[i][j];

        int row = helper(i-1,j,m,n,dp);
        int col = helper(i,j-1,m,n,dp);

        return dp[i][j] = row+col;
        
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return helper(m-1,n-1,m,n,dp);
    }
};