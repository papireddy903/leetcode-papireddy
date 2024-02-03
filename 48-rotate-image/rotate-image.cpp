class Solution {
private:
    void transposeMatrix(vector<vector<int>>& matrix) {
        for (int row = 0; row < matrix.size(); ++row) {
            for (int col = row; col < matrix[0].size(); ++col) {
                int temp = matrix[row][col];
                matrix[row][col] = matrix[col][row];
                matrix[col][row] = temp;
            }
        }
    }

    void reverseRowsInMatrix(vector<vector<int>>& matrix) {
        for (int r = 0; r < matrix.size(); ++r) {
            int left = 0;
            int right = matrix[0].size() - 1;

            while (left < right) {
                int temp = matrix[r][left];
                matrix[r][left] = matrix[r][right];
                matrix[r][right] = temp;

                ++left;
                --right;
            }
        }
    }

public:
    void rotate(vector<vector<int>>& matrix) {
        transposeMatrix(matrix);
        reverseRowsInMatrix(matrix);
    }
};
