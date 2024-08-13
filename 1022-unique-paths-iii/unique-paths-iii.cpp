class Solution {
    private:
    int helper(int i, int j, int count,int zero, vector<vector<int>> &grid,
    vector<vector<vector<int>>> &dp){
        if (i<0 or j<0 or i>=grid.size() or j>=grid[0].size() or grid[i][j] == -1) return 0;

        if (grid[i][j] == 2){
            if (count == zero){
                return 1;
            }
            return 0;
        }
        if (dp[i][j][count]!=-1){
            return dp[i][j][count];
        }
        grid[i][j] = -1;



        int up = helper(i-1,j,count+1, zero, grid,dp);
        int down = helper(i+1,j,count+1, zero, grid,dp);
        int left = helper(i,j-1,count+1, zero, grid,dp);
        int right = helper(i,j+1,count+1, zero, grid,dp);

        grid[i][j] = 0;

        return dp[i][j][count+1] = up + down + left + right;
    }
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int x = 0, y = 0;
        int zero = 1;
        for (int i = 0;i<m;i++){
            for (int j = 0;j<n;j++){
                if (grid[i][j] == 1){
                    x = i;
                    y = j;
                }
                else if (grid[i][j] == 0){
                    zero++;
                }
            }
        }

        vector<vector<vector<int>>> dp(m, vector<vector<int>> (n, vector<int>(zero+1, -1)));

        return helper(x,y,0,zero, grid,dp);
        
    }
};