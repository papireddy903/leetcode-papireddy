class Solution {
    private:
    void helper(int ind, vector<int> &nums, int n, set<vector<int>> &s){

        if (ind == n){
            s.insert(nums);
            return;
        }
        
        for (int i = ind;i<n;i++){
            swap(nums[ind], nums[i]);
            helper(ind+1,nums,n,s);
            swap(nums[ind], nums[i]);
        }
        // return ans;
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        set<vector<int>> s;
        helper(0,nums,n,s);
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
        

    }
};