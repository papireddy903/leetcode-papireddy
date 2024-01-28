class Solution {
    private:
    int helper(int i, int j, vector<vector<int>> &grid,vector<vector<int>> &dp){
        if (i==0 and j==0) return grid[0][0]==0;
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
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m,0));

        for (int i= 0 ;i<n;i++){
            for (int j = 0;j<m;j++){
                if (grid[i][j] == 1) dp[i][j] = 0;
                else if (i==0 and j==0) dp[i][j] = 1;
                else{
                    int up = 0;
                    if (i>0){
                        up = dp[i-1][j];
                    }
                    int left = 0;
                    if (j>0){
                        left = dp[i][j-1];
                    }

                    dp[i][j] = up + left;
                }

            }
        }
        return dp[n-1][m-1];
    }
};