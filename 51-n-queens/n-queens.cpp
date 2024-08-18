class Solution {
    private:
    bool isSafe(int row, int col, vector<vector<string>> &ans, vector<string>&board, int n){
        int store_r = row;
        int store_c = col;

        while (row>=0 and col>=0){
            if (board[row][col] == 'Q'){
                return false;
            }
            row--;
            col--;
        }

        row = store_r;
        col = store_c;

        while (col>=0){
            if (board[row][col] == 'Q') return false;
            col--;
        }
        col = store_c;

        while (row<n and col >= 0){
            if (board[row][col] == 'Q') return false;
            col--;
            row++;
        }
        return true;



        




    }
    void helper(int col, vector<vector<string>> &ans, vector<string> &board, int n){
        if (col ==n ){
            ans.push_back(board);
            return;
        }

        for (int row = 0;row<n;row++){
            if (isSafe(row, col, ans,board,n)){
                board[row][col] = 'Q';
                helper(col+1, ans,board,n);
                board[row][col] = '.';
            }
        }


    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        for (int i = 0;i<n;i++){
            board[i] = s;
        }

        helper(0,ans,board,n);
        return ans;
        
    }
};