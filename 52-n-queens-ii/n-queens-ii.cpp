class Solution {
    private:
    int count = 0;
    bool isSafe(int row, int col, vector<string> &board, int n ){
        int trow = row;
        int tcol = col;

        while (row >= 0 and col >=0){
            if (board[row][col] == 'Q'){
                return false;

            }
            row--;
            col--;
        }

        row = trow;
        col = tcol;

        while (row<n and col>=0){
            if (board[row][col] == 'Q'){
                return false;
            }
            row++;
            col--;
        }
        row = trow;
        col = tcol;

        while (col >= 0){
            if (board[row][col] == 'Q'){
                return false;
            }
            col--;
        }
        col = tcol;
        return true;

    }
    void solve(int col, vector<string>&board,int n){
        if (col == n){
            count++;
            return ;
        }

        for (int r = 0;r<n;r++){
            if (isSafe(r,col,board,n)){
                board[r][col] = 'Q';
                solve(col+1, board, n);
                board[r][col] = '.';
            }
        }
        
    }
public:
    int totalNQueens(int n) {
        string fil(n,'.');
        vector<string> board(n);
        for (int i = 0;i<n;i++){
            board[i] = fil;
        }
        // int count = 0;
        solve(0,board,n);
        return count;

    }
};