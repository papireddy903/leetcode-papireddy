class Solution {
    private:
    int helper(int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp){
        if (i==0 and j==0) return grid[0][0];
        if (i<0 or i>grid.size() or j<0 or j>grid[0].size()) return INT_MAX;
        if (dp[i][j]!=-1) return dp[i][j];

        int up = INT_MAX;
        if (i>0)
        up = helper(i-1,j,grid,dp);
        int left = INT_MAX;
        if (j>0)
        left = helper(i,j-1,grid,dp);

        return dp[i][j] = grid[i][j]+min(up,left);
    }
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        return helper(n-1,m-1,grid,dp);
        
    }
};