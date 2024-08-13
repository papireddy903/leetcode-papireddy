class Solution {
public:
    long long countExcellentPairs(vector<int>& nums, int k) {
        vector<int> setBits;
        set<int> unq_nums(nums.begin(),nums.end());

        for (auto it : unq_nums){
            long long count = 0;
            while (it){
                count+= it&1;
                it >>= 1;
            }
            setBits.push_back(count);
        }

        sort(setBits.begin(),setBits.end());

        int i = 0, j = setBits.size()-1;
        long long ans = 0;
        int n = setBits.size();
        while (i<n and j>=0){
            if (setBits[i] + setBits[j] >= k){
                ans += n - i;
                j--;
            }
            else{
                i++;
            }
        }

        return ans;

        
    }
};