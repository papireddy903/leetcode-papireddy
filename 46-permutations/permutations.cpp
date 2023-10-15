class Solution {
private:
    void helper(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            if (find(ds.begin(), ds.end(), nums[i]) == ds.end()) {
                ds.push_back(nums[i]);
                helper(nums, ans, ds);
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        
        helper(nums, ans, ds);
        
        return ans;
    }
};
