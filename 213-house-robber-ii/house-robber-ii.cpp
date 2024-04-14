class Solution {
    private:
    int helper(int ind, vector<int> &nums, vector<int> &dp){
        if (ind == 0) return nums[ind];
        if (ind < 0) return 0;
        if (dp[ind]!=-1) return dp[ind];

        int take = nums[ind]+helper(ind-2,nums,dp);
        int nottake = helper(ind-1, nums,dp);

        return dp[ind] = max(take,nottake);

    }
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n==1) return nums[0];
        vector<int> dp1(n, -1), dp2(n,-1);
        vector<int> nums1,nums2;
        for (int i = 0;i<n;i++){
            if (i!=0){
                nums1.push_back(nums[i]);
            }
            if (i!=n-1){
                nums2.push_back(nums[i]);
            }
        }
        int n1 = nums1.size();
        int n2 = nums2.size();
        int ans1 = helper(n1-1,nums1,dp1);
        int ans2 = helper(n2-1,nums2,dp2);
        return max(ans1,ans2);
    }
};