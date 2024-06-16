class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;

        for (int i = 0;i<nums.size();i++){
            int it  = nums[i];
            if (j == 0 or j == 1 or it !=nums[j-2]){
                nums[j] = it;
                j++;
            }

        }
        return j;
        
    }
};