class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for (int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        priority_queue<pair<int,int>> maxHeap;

        for (auto it: mp){
            maxHeap.push({it.second, it.first});

            // if(maxHeap.size() > k){
            //     maxHeap.pop();
            // }

        }

        vector<int> res;

        while (k--){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return res;



        
    }
};