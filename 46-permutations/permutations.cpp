class Solution {
private:
    void helper(int ind,vector<int> &nums, vector<vector<int>> &ans) {
        if (ind == nums.size()){
            ans.push_back(nums);
            return ;
        }
        
        for (int i = ind; i<nums.size(); i++){
                swap(nums[ind],nums[i]);
                helper(ind+1,nums,ans);
                swap(nums[ind],nums[i]);
            
        }
        

        
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        // vector<int> ds;
        int ind = 0;
        int n = nums.size();
        // vector<int> visited(n,0);
        
        helper(0,nums, ans);
        
        return ans;
    }
};
