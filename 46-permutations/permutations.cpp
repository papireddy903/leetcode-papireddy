class Solution {
    private:
    void permuteArray(int ind, vector<vector<int>> &ans, vector<int> &nums){
        int n = nums.size();
        if (ind == n){
            ans.push_back(nums);
            return ;
        }
        for (int i = ind;i<n;i++){
            swap(nums[i],nums[ind]);
            permuteArray(ind+1,ans,nums);
            swap(nums[i],nums[ind]);
        }


    }
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permuteArray(0,ans,nums);
        return ans;
    }
};