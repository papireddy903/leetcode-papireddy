class Solution {
    private:
    int helper(int i, int j, vector<vector<int>> &grid,vector<vector<int>> &dp){
        if (i==0 and j==0) return grid[0][j]==0;
        if (i<0 or j<0 or j>=grid[0].size() or j<0) return 0;
        if (grid[i][j] == 1){
            return 0;
        }
        if (dp[i][j]!=-1) return dp[i][j];
        int up = helper(i-1,j,grid,dp);
        int left = helper(i,j-1,grid,dp);
        return dp[i][j] = up+left;
    }
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n,vector<int> (m,-1));
        return helper(n-1,m-1,obstacleGrid,dp);
    }
};