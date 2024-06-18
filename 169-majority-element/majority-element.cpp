class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count =0 ;
        unordered_map<int,int> mp;
        int n = nums.size();
        for (auto it: nums){
            mp[it]++;
        }

        for (auto it: nums){
            if (mp[it] > (n/2)){
                return it;
            }
        }
        return 0;
        
    }
};