class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> ans;
        for (int i = 0;i<strs.size();i++){
            string cur_word = strs[i];
            sort(cur_word.begin(), cur_word.end());
            mp[cur_word].push_back(strs[i]);
        }

        for (auto it: mp){
            ans.push_back(it.second);

        }
        return ans;
        
    }
};