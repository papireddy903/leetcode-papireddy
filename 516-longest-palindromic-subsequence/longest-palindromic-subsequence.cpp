class Solution {
    private:
    int helper(int ind1, int ind2, string a, string b, vector<vector<int>> &dp){
        if (ind1 < 0 or ind2< 0) return 0;
        if (a[ind1] == b[ind2]){
            return 1 + helper(ind1-1,ind2-1, a,b,dp);
        }

        if (dp[ind1][ind2]!= -1){
            return dp[ind1][ind2];
        }

        else {
            return dp[ind1][ind2] = 0 + max(helper(ind1-1, ind2, a,b,dp), helper(ind1, ind2-1,a,b,dp));
        }
    }
public:
    int longestPalindromeSubseq(string s) {
        string org = s;
        reverse(s.begin(),s.end());
        int n = s.size();
        // vector<vector<int>> dp(n, vector<int> (n,-1));
        vector<vector<int>> dp(n+1, vector<int> (n+1,0));

        for (int i = 1;i<=n;i++){
            for (int j = 1;j<=n;j++){
                if (org[i-1] == s[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];

                }
                else{
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }

        // return helper(n-1,n-1,org,s,dp);
        return dp[n][n];
        
    }
};