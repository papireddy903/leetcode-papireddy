class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        queue<pair<int,int>> q;
        vector<vector<int>> visited(m, vector<int> (n,0));

        for (int i = 0;i<m;i++){
            for (int j = 0;j<n;j++){
                if (i==0 or j==0 or i==m-1 or j==n-1){
                    if (grid[i][j] == 1){
                        q.push({i,j});
                        visited[i][j] = 1;
                    }
                }
            }
        }

        // dirs = (+1,0), (-1,0), (0,+1), (0,-1)
        int rows[] = {1,-1, 0,0};
        int cols[] = {0,0,1,-1};

        while (!q.empty()){
            int nrow = q.front().first;
            int ncol = q.front().second;
            q.pop();

            for (int i = 0;i<4;i++){
                int frow = nrow + rows[i];
                int fcol = ncol + cols[i];
            

            if (frow >= 0 and frow < m and fcol>=0 and fcol<n and visited[frow][fcol] == 0 and grid[frow][fcol]==1){
                q.push({frow,fcol});
                visited[frow][fcol] = 1;

            }
            }
            
        }

        int rem = 0;
        for (int i = 0;i<m;i++){
            for (int j = 0;j<n;j++){
                if (grid[i][j] == 1 and visited[i][j] == 0) rem++;
            }
        }
        return rem;
        
        
    }
};