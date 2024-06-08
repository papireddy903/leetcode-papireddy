class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
        mp[0] = 1;

        int prefSum = 0;
        int count = 0;

        for (int i = 0;i<nums.size();i++){
            prefSum += nums[i];

            int remove = prefSum - k;

            count += mp[remove];
            mp[prefSum]++;
            


        }

        return count;
        
    }
};