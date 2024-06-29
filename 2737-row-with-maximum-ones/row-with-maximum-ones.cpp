class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row=0;
        int maxi = 0;
        int m = mat.size();
        int n = mat[0].size();
        for (int i = 0;i<m;i++){
            int cur_count = 0;
            for (int j = 0;j<n;j++){
                if (mat[i][j] == 1){
                    cur_count++;
                }

            }
            if (cur_count > maxi){
                row = i;
                maxi = cur_count;
            }
        }
        
        return {row, maxi};
        
    }
};