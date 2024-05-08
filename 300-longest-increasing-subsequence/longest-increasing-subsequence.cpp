class Solution {
    private:
    int helper(vector<int> &nums, int ind, int prev,vector<vector<int>> &dp){
        if (ind == nums.size()){
            return 0;
        }

        if (dp[ind][prev+1] != -1){
            return dp[ind][prev+1];
        }
        int pick;
        int notpick = 0 + helper(nums,ind+1, prev,dp);
        if (prev==-1 or nums[ind] > nums[prev]){
            pick = 1 + helper(nums, ind+1, ind,dp);
        }
        return dp[ind][prev+1] = max(pick, notpick);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int> (n+1,-1));

        return helper(nums,0,-1,dp);

        
    }
};