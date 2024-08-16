class Solution {
    private:
    void helper(int ind, vector<int> &ds, vector<int> &candidates, int target, vector<vector<int>> &ans){
        if (target == 0){
            ans.push_back(ds);
            return; 
        }

        for (int i = ind;i<candidates.size();i++){
            if (i!=ind and candidates[i] == candidates[i-1]){
                continue;
            }
            if (candidates[i] > target) break;
            ds.push_back(candidates[i]);
            helper(i+1, ds, candidates, target-candidates[i],ans);
            ds.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        helper(0,ds,candidates, target, ans);
        return ans;
    }
};