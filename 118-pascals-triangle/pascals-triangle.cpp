class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if (numRows == 1) return ans;
        ans.push_back({1,1});
        if (numRows == 2) return ans;
        for (int i = 2;i<numRows;i++){
            vector<int> temp(i+1,0);
            for (int j = 0;j<i+1;j++){
                if (j == 0){
                    temp[0] = 1;
                }
                else if (j==i){
                    temp[j] = 1;
                }
                else{
                    temp[j] = ans[i-1][j-1] + ans[i-1][j];

                }
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};