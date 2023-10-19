class Solution {
    private:
    bool isSafe(int row,int col,vector<vector<string>> &ans,vector<string>&board,int n){
        int temprow = row;
        int tempcol = col;

        while (row>=0 and col>=0){
            if (board[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }

        row = temprow;
        col = tempcol;

        while(col >=0){
            if (board[row][col] == 'Q') return false;
            col--;
        }

        col = tempcol;

        while (row<n and col>=0){
            if (board[row][col] == 'Q') return false;
            col--;
            row++;
        }
        return true;
    }
    void solve(int col,vector<vector<string>> &ans, vector<string> &board,int n){
        if (col == n){
            ans.push_back(board);
            return ;
        }

        for (int row = 0;row<n;row++){
            if (isSafe(row,col,ans,board,n)){
                board[row][col] = 'Q';
                solve(col+1,ans,board,n);
                board[row][col] = '.';
            }
        }
        
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for (int i = 0;i<n;i++){
            board[i] = s;

        }

        solve(0,ans,board,n);
        return ans;
        
    }
};