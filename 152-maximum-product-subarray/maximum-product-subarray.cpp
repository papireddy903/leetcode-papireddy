class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int p = 1;
        int s = 1;
        int n = nums.size();
        for (int i = 0;i<nums.size();i++){
            if (p==0){
                p = 1;
            }
            if (s==0){
                s = 1;
            }
            p = p * nums[i];
            s = s * nums[n-i-1];

            maxi = max(maxi, max(p,s));
        }
        return maxi;
    }
};