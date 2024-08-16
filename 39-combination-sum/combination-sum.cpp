class Solution {
    private:
    void helper(int ind, vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &dp){
        int n = candidates.size();

        if (ind == n){
            if (target == 0){
                ans.push_back(dp);
            }
                return ;
        }
        
        dp.push_back(candidates[ind]);
        if (target - candidates[ind] >= 0){
            helper(ind, candidates, target-candidates[ind], ans,dp);
        }

        dp.pop_back();
        helper(ind+1, candidates, target, ans,dp);

        

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;

        helper(0,candidates, target, ans,ds);
        return ans;
        
        
    }
};