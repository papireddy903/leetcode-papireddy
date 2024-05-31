class Solution {
    private:
    int helper(int i, int j, string a, string b, vector<vector<int>> &dp){
        if (i<0){
            return j+1;
        }

        if (j<0){
            return i+1;
        }

        if (dp[i][j] !=-1) return dp[i][j];

        int insert,del,replace;
        if (a[i]==b[j]){
            return dp[i][j] = helper(i-1,j-1,a,b,dp);
        }

        insert = 1 + helper(i,j-1,a,b,dp);
        del = 1 + helper(i-1,j,a,b,dp);
        replace = 1 + helper(i-1,j-1,a,b,dp);
        return dp[i][j] = min(insert,min(del, replace));

    }
public:
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n, vector<int>(m,-1));
        return helper(n-1,m-1,word1,word2,dp);
        
    }
};