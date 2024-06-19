class Solution {
    private:
    bool helper(int ind, vector<int> &nums, int end,vector<int> &dp){
        if (ind >=end){
            return true;
        }

        if (dp[ind]!=-1){
            return dp[ind];
        }
        int steps = nums[ind];
        for (int i = 1;i<=steps;i++){
            if (helper(ind+i, nums,end,dp))
                return dp[ind] = true;
        }

        return dp[ind] = false;
        


    }
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        // vector<int> dp(n+1,-1);
        vector<bool> dp(n, false);
        dp[n-1] = true;

        for (int i = n-2;i>=0;i--){
            for (int j = 1;j<=nums[i];j++){
                if (dp[i+j] and i + j < n){
                    dp[i] = true;
                    break;
                }
            }
        }
        // return helper(0,nums,n-1,dp);
        return dp[0];
    }
};