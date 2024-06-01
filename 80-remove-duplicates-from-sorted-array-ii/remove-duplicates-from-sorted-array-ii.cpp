class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (auto it : nums){
            if (i ==0 or i==1 or nums[i-2]!=it){
                nums[i] = it;
                i++;
            }
        }
        return i;
        
    }
};