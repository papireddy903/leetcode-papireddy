class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int res = 0 ;
        for (int i = 0;i<n;i++){
            for (int j = 0;j<m;j++){
                int neighbours = 0;
                if (grid[i][j] == 1){
                    if (i<n-1 and grid[i+1][j] == 1){
                        neighbours++;
                    }
                    if (i>0 and grid[i-1][j] == 1){
                        neighbours++;
                    }
                    if (j < m-1 and grid[i][j+1] == 1){
                        neighbours++;
                    }
                    if (j > 0 and grid[i][j-1] == 1){
                        neighbours++;
                    }
                    res += 4 - neighbours;

                }
            }
        }
        return res;
    }
};