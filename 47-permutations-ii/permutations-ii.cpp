class Solution {
    private:
    void dfs(vector<vector<int>> &perms, vector<int> &temp, unordered_map<int,int> &mp,vector<int> &nums){
        if (temp.size()==nums.size()){
            perms.push_back(temp);
            return;
        }

        for (auto it : mp){
            if (it.second > 0){
                temp.push_back(it.first);
                mp[it.first]--;
                dfs(perms,temp,mp,nums);
                temp.pop_back();
                mp[it.first]++;
            }
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> perms;
        vector<int> temp;
        unordered_map<int,int> mp;
        for (auto it : nums){
            mp[it]++;
        }

        dfs(perms,temp,mp, nums);

        return perms;
        
    }
};