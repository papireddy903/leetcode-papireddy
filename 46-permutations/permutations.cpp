class Solution {
private:
    void helper(vector<int> &nums, vector<vector<int>> &ans, vector<int> &ds,vector<int> &visited) {
        if (ds.size() == nums.size()) {
            ans.push_back(ds);
            return;
        }
        
        for (int i = 0;i<visited.size();i++){
            if (visited[i]==0){
                ds.push_back(nums[i]);
                visited[i] = 1;
                helper(nums,ans,ds,visited);
                visited[i] = 0;
                ds.pop_back();

            }
        }
        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n = nums.size();
        vector<int> visited(n,0);
        
        helper(nums, ans, ds,visited);
        
        return ans;
    }
};
