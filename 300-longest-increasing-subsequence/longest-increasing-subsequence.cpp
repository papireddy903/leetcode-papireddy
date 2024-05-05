class Solution {
    private:
    int helper(int ind, int prev,vector<int> &nums, vector<vector<int>> &dp){
        if (ind==nums.size()) return 0;
        if (dp[ind][prev+1] != -1){
            return dp[ind][prev+1];
        }

        int notpick = 0 + helper(ind+1,prev, nums, dp);
        int pick = 0;
        if (prev==-1 or nums[ind] > nums[prev]){
             pick = 1+helper(ind+1,ind, nums, dp);
            
        }
        return dp[ind][prev+1] = max(pick,notpick);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int> (n+1, -1));

        return helper(0,-1,nums,dp);
        
    }
};