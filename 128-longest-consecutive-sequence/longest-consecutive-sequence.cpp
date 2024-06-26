class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0) return {};
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int prev = INT_MIN;
        int count = 0;
        int longest = 1;
        for (int i = 0;i<nums.size();i++){

            if (prev==nums[i]-1){
                prev = nums[i];
                count++;
            }
            else if(prev!=nums[i]) { 
                prev = nums[i];
                count = 1;
            }

            longest = max(longest, count);
            

        }
        return longest;
        
    }
};