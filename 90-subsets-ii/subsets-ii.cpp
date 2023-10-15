class Solution {
    private:
    void helper(int ind, vector<int>&nums,int n, vector<vector<int>>&ans,vector<int> &ds){
        ans.push_back(ds);
        for (int i = ind; i<nums.size(); i++){
            if ((i!=ind) and nums[i] == nums[i-1]){
                continue;
            }
            ds.push_back(nums[i]);
            helper(i+1,nums,n,ans,ds);
            ds.pop_back();
            
        }
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        helper(0,nums,n,ans,ds);
        return ans;
        
    }
};