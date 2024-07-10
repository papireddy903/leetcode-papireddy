class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0,r = 0;
        int maxi = 0, zeros = 0;
        while (r < n){
            if (nums[r] == 0) zeros++;
            while(zeros>k){
                if(nums[l] == 0){
                    zeros--; 
                }
                    l++;
            }

            if (zeros <= k){
                maxi = max(maxi, r-l+1);
            }

            r++;
            

        }

        return maxi;
        
    }
};