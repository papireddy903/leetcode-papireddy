class Solution {
public:
    int minDifference(vector<int>& nums) {

        // 2 3 4 5

        int n = nums.size();
        if (n<=4) return 0;

        sort(nums.begin(),nums.end());

        // 0 1 5 10 14

        // 14 -> 0 = 0 1 5 10 0
        // 10 -> 0 = 0 1 5 0 0 
        // 5 -> 0 = 0 1 0 0 0 

        int mini = INT_MAX;

        mini = min(mini, nums[n-4] - nums[0]);
        mini = min(mini, nums[n-1] - nums[3]);
        mini = min(mini, nums[n-2] - nums[2]);
        mini = min(mini, nums[n-3] - nums[1]);

        return mini;

        


    }
};