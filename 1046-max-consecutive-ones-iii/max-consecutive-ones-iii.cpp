class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count = 0;
        int n = nums.size();
        int i = 0, j = 0;
        int len = 0;
        while (j<n){
            if (nums[j]==0) count+=1;

            while (count > k){
                if (nums[i]==0) count--;
                i++;
                

            }

            if(count<=k){
                len = max(len, (j-i+1));
            }
            j++;
        }

        return len;

        
    }
};