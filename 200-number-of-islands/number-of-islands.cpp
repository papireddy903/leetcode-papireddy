class Solution {
    private:
    void helper(int row,int col, vector<vector<char>> &grid, vector<vector<int>> &visited){
        int m =grid.size();
        int n = grid[0].size();
        if (row < 0 or row>=m or col<0 or col>=n or grid[row][col]=='0' or visited[row][col]==1) return;
        visited[row][col] = 1;
        
        helper(row+1,col,grid,visited);
        helper(row,col-1,grid,visited);
        helper(row-1, col, grid,visited);
        helper(row, col+1, grid, visited);

        
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        
        int m =grid.size();
        int n = grid[0].size();
        int row, col;
        int islands = 0;
        vector<vector<int>> visited(m, vector<int> (n,0));
        for (int i = 0;i<grid.size();i++){
            for (int j = 0;j<grid[0].size();j++){
                if (grid[i][j] == '1' and visited[i][j]==0){
                    row = i;
                    col = j;
                    helper(row,col,grid,visited);
                    islands++;
                }
            }
        }
        return islands;

        
    }
};