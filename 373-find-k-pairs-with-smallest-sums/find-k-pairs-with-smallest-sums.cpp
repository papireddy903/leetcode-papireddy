class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        vector<vector<int>> ans;

        for (int i = 0;i<nums1.size();i++){
            q.push({nums1[i]+nums2[0], 0});
        }

        while (!q.empty() && k--){
            int summ = q.top().first;
            int ind = q.top().second;

            ans.push_back({summ-nums2[ind],nums2[ind]});
            q.pop();

            if (ind + 1 < nums2.size()){
                q.push({summ - nums2[ind] + nums2[ind+1], ind+1});
            }


        }
        return ans;




        
    }
};