class Solution {
    private:
    int helper(vector<int> &nums, int i, int j, vector<vector<int>> &dp){
        if (i==j){
            return nums[j];
        }

        if (j==i+1){
            return max(nums[i], nums[j]);
        }

        if (dp[i][j]!=-1) return dp[i][j];

        int one = nums[i] + min(helper(nums,i+2,j,dp),helper(nums, i+1,j-1,dp));
        int two = nums[j] + min(helper(nums,i+1,j-1,dp), helper(nums,i,j-2,dp));

        return dp[i][j] = max(one,two);
    }
public:
    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int> (n,-1));

        int total_sum = 0;
        for (int i = 0;i<nums.size();i++){
            total_sum += nums[i];
        }

        int a_score = helper(nums,0,n-1,dp);

        if (a_score >= total_sum - a_score ){
            return true;
        }
        return false;
        


        
    }
};