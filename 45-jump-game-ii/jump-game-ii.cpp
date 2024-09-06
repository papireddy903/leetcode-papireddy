class Solution {
    private:
    int helper(int ind, int end, vector<int> &nums, vector<int>&dp){
        if (ind>=end) return 0;
        if (dp[ind]!=-1) return dp[ind];

        int steps = nums[ind];
        int mini = 1e9+7;
        for (int i = 1;i<=steps;i++){
            int k = 1 + helper(ind+i,end, nums,dp);
            mini = min(mini, k);
        }
        return dp[ind] = mini;
    }
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return helper(0,n-1,nums,dp);
        
    }
};