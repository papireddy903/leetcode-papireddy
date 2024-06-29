class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row;
        int maxi = 0;
        int m = mat.size();
        int n = mat[0].size();
        for (int i = m-1;i>=0;i--){
            int cur_count = 0;
            for (int j = n-1;j>=0;j--){
                if (mat[i][j] == 1){
                    cur_count++;
                }

            }
            if (cur_count >= maxi){
                row = i;
                maxi = cur_count;
            }
        }
        
        return {row, maxi};
        
    }
};