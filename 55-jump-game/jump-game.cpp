class Solution {
    private:
    bool helper(int ind, int end, vector<int> &nums,vector<int> &dp){
        if (ind>=end){
            return true;
        }
        if (dp[ind]!=-1) return dp[ind];
        for (int steps = 1;steps<=nums[ind];steps++){
            if (helper(ind+steps,end, nums,dp)){
                return dp[ind]=true;
                
            }
        }
        return dp[ind]=false;
    }

    
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,-1);
        return helper(0,n-1,nums,dp);
        
    }
};