class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int n = nums.size();
        int count = 0;
        for (int i = 0;i<nums.size();i++){

            if (count == 0){
                candidate = nums[i];
            }
            if (nums[i] == candidate)
                count++;
            else {
                count -=1;
            }

        }
        if (count>0){
            return candidate;
        }
        return 0;
        
    }
};