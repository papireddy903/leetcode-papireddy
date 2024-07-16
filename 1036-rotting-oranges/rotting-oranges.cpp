class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<pair<int,int>, int>> q;
        vector<vector<int>> visited(n, vector<int> (m,0));

        for (int i = 0;i<n;i++){
            for (int j = 0;j<m;j++){
                if (grid[i][j] == 2){
                    q.push({{i,j}, 0});
                    visited[i][j] = 2;
                }
            }
        }

        int drow[] = {0,0,-1,1};
        int dcol[] = {-1,1,0,0};
        int tm = 0;
        while (!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm, t);
            q.pop();

            for (int i = 0;i<4;i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if (nrow>=0 and nrow<n and ncol<m and ncol>=0 and grid[nrow][ncol] == 1 and visited[nrow][ncol] == 0){
                        q.push({{nrow,ncol}, t+1});
                        visited[nrow][ncol] = 2;
                    
                }
            }

        }
            for (int i = 0;i<n;i++){
                for (int j = 0;j<m;j++){
                    if (visited[i][j]!=2 and grid[i][j] == 1){
                        return -1;
                    }
                }
            }
        return tm;


        
        
    }
};