class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
        // find all subarrays
        // count frequency in that subarray
        // find the length of the subarray
        // store maximum length

        unordered_map<int,int> mp;
        int maxi = 0;
        int j = 0;
        for (int i = 0;i<nums.size();i++){
            mp[nums[i]]++;

            while (mp[nums[i]] > k){
                mp[nums[j]]--;

                if (mp[nums[j]] == 0){
                    mp.erase(nums[j]);
                }
                j++;
            }

            maxi = max(i-j+1, maxi);
        }

        return maxi;
        

    }
};