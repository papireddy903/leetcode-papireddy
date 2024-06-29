class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> ans;

        vector<int> temp(score.begin(),score.end());
        // 10 9 8 4 3 
        unordered_map<int,string> mp;

        sort(score.begin(),score.end(), greater<int> ());

        for (int i = 0 ;i<score.size();i++){
            if (i==0){
                mp[score[i]] = "Gold Medal";
            }
            else if (i==1) mp[score[i]] = "Silver Medal";
            else if (i==2) mp[score[i]] = "Bronze Medal";
            else mp[score[i]] = to_string(i+1);
        }

        for (auto it: temp){
            ans.push_back(mp[it]);
        }

        return ans;

        
    }
};