#include<bits/stdc++.h>
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
        // int n = nums.size();
        // // vector<vector<int>> dp(n+1, vector<int> (n+1, 0));
        // vector<int> dp(n,1);
        // int maxi = 1;
        // for (int i = 0;i<n;i++){
        //     for (int j = 0;j<i;j++){
        //         if (nums[j] < nums[i]){
        //             dp[i] = max(dp[i], 1+dp[j]);
        //         }
        //     }
        //     maxi = max(maxi, dp[i]);
        // }
        // return maxi;

        // return helper(0,-1,nums,dp);
        vector<int> ans;
        ans.push_back(nums[0]);
        int len = 1;
        for (int i = 1;i<nums.size();i++){
            if (nums[i] > ans.back()){
                ans.push_back(nums[i]);
                len++;
            }
            else{
                int ind = lower_bound(ans.begin(),ans.end(), nums[i])-ans.begin();
                ans[ind] = nums[i];
            }
        }
        return len;
        
    }
};