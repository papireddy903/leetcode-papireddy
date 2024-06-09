class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int prefSum = 0;

        int count=0;
        mp[0] = 1;



        for (int i = 0 ;i<nums.size();i++){
            prefSum += nums[i];

            int rem = prefSum % k;

            if (rem < 0){
                rem += k;
            }

            if (mp.find(rem)!=mp.end()){
                count+=mp[rem];
            }
            mp[rem]+=1;

        }
        
        return count;
    }
};

// -1 2 9 
// k = 2 

// -1 , 1 , 10 

// -5 % 2 = 
