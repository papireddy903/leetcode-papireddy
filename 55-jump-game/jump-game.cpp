class Solution {
    private:
    bool helper(vector<int> &nums, int ind, int end,vector<int> &dp){
        if (ind >= end){
            return true;
        }

        if (dp[ind]!=-1){
            return dp[ind];
        }

        int steps = nums[ind];
        for (int i = 1 ;i<=steps;i++){
            if (helper(nums,ind+i, end,dp)){
                return dp[ind] = true;
            }
        }
        return dp[ind] = false;

    }
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n+1,-1);
        return helper(nums,0,n-1,dp);
        
    }
};