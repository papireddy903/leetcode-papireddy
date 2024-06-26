class Solution {
    private:
    void makeZeroes(int row, int col, vector<vector<int>> &matrix, vector<vector<int>> &visited){
        visited[row][col] = 1;
        int n = matrix.size();
        int m = matrix[0].size();

        for (int i = 0;i<m;i++){
            if (matrix[row][i]!=0){
            visited[row][i] = 1;
            matrix[row][i] = 0;
            }
        }
        for (int i = 0;i<n;i++){
            if (matrix[i][col]!=0){
            visited[i][col] = 1;
            matrix[i][col] = 0;
            }
        }
        
    }
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> visited(n, vector<int> (m,0));

        for (int i = 0;i<n;i++){
            for (int j = 0;j<m;j++){
                if (matrix[i][j]==0){
                    if (visited[i][j] == 0)
                    makeZeroes(i,j,matrix, visited);


                }
            }
        }

        
    }
};