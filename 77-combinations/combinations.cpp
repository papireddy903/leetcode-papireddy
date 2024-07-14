class Solution {
    private:
    void helper(int ind, int k, int n, vector<vector<int>> &ans, vector<int> &temp){
        if (temp.size()==k){
            ans.push_back(temp);
            return;
        }

        for (int i = ind;i<=n;i++){
            temp.push_back(i);
            helper(i+1,k,n,ans,temp);
            temp.pop_back();

        }

    }
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> ans;
        vector<int> temp;
        helper(1,k,n,ans, temp);
        return ans;
    }
};