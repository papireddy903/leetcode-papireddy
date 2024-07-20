class Solution {
    void helper(vector<int>& nums, vector<int>& current, vector<vector<int>>& perms, vector<bool>& visited) {
        if (current.size() == nums.size()) {
            perms.push_back(current);
            return;
        }
        
        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicates
            if (visited[i] || (i > 0 && nums[i] == nums[i - 1] && !visited[i - 1])) {
                continue;
            }
            
            visited[i] = true;
            current.push_back(nums[i]);
            helper(nums, current, perms, visited);
            current.pop_back();
            visited[i] = false;
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> perms;
        vector<int> current;
        vector<bool> visited(nums.size(), false);
        
        // Sort the numbers to handle duplicates
        sort(nums.begin(), nums.end());
        
        helper(nums, current, perms, visited);
        return perms;
    }
};
