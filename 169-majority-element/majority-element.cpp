class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 1;
        for (int i =1;i<nums.size();i++){
            if (candidate == nums[i]) count++;

            else{
                count--;
            }

            if (count <= 0){
                count=1;
                candidate = nums[i];
            }

        }
        return candidate;
        
    }
};