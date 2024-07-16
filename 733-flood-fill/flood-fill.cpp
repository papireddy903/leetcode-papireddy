class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        int Org = image[sr][sc];
        int n = image.size();
        int m = image[0].size();

        queue<pair<int,int>> q;
        q.push({sr,sc});

        int drow[] = {0,0,-1,1};
        int dcol[] = {-1,1,0,0};
        while (!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for (int i = 0;i<4;i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if (nrow>=0 and nrow<n and ncol>=0 and ncol<m  and image[nrow][ncol] == Org){
                    q.push({nrow,ncol});
                    image[nrow][ncol] = color;
                    
                }
            }


        }
        image[sr][sc] = color;

        return image;
        
    }
};