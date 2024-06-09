class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1;
        int count = 0;
        int prefSum = 0;

        for (int i = 0;i<nums.size();i++){
            prefSum += nums[i];

            int rem = prefSum - k;

            if (mp.find(rem)!=mp.end()){
                count+=mp[rem];
            }
            mp[prefSum]++;
        }
        return count;
        
    }
};