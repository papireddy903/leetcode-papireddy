class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        long long tr = 0;
        long long ele = 0;
        long long cl = nums.back();
        long long n = nums.size();
        for (long long i = n-1;i>=0;i--){
            if (nums[i] <= cl){
                cl = nums[i];
                continue;
            }

            if (nums[i] % cl){
                ele = nums[i] / cl +1;
                cl = nums[i] / ele;
            }
            else{
                ele = nums[i] / cl;
            }

            tr += ele-1;
            



        }
        return tr;
    }   
};