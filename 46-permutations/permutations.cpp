class Solution {
    private:
        void permuteArray(vector<int> &nums,vector<vector<int>> &ans,vector<int>&ds,vector<int> &freq){
            if (ds.size() == nums.size()){
                ans.push_back(ds);
                return ;
            }

            for (int i = 0;i<nums.size();i++){
                if (!freq[i]){
                    freq[i]++;
                    ds.push_back(nums[i]);
                    permuteArray(nums,ans,ds,freq);
                    freq[i]--;
                    ds.pop_back();

                }
            }
            
        }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(n,0);
        permuteArray(nums,ans,ds,freq);
        return ans;
        
    }
};