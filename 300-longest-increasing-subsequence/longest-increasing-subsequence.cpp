class Solution {
    private:
    int helper(vector<int> &nums, int cur, int prev, vector<vector<int>> &dp){
        int n = nums.size();
        if (cur == n){
            return 0;
        }
        if(dp[cur][prev+1]!=-1) return dp[cur][prev+1];
        int pick=0;
        int notpick = helper(nums,cur+1, prev,dp);
        if (prev==-1 or nums[cur] > nums[prev]){
            pick = 1+helper(nums,cur+1, cur,dp);
        }

        return dp[cur][prev+1] =  max(pick, notpick);
    }
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int> (n+1, -1));

        return helper(nums,0,-1,dp);
        
    }
};