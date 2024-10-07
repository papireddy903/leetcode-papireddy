class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ranks(arr.size());

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> min_heap;

       for (int i = 0;i<arr.size();i++){
        min_heap.push({arr[i], i});
       }

       unordered_map<int,int> mp;
        
        int rank = 1;
        while (!min_heap.empty()){
            int val = min_heap.top().first;
            int ind = min_heap.top().second;

            min_heap.pop();

            if (mp.find(val)==mp.end()){
                mp[val] = rank;
                rank++;
            }

            ranks[ind] = mp[val];

        }
        return ranks;
    }
};