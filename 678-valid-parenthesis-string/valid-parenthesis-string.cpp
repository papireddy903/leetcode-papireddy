class Solution {
    private:
    bool helper(int ind, string s, int count, vector<vector<int>> &dp){
        int n = s.size();
        if (ind < 0 or count < 0) return false;
        if (ind == n) return count==0;

        if (dp[ind][count]!=-1) return dp[ind][count];

        if (s[ind]=='('){
            return dp[ind][count]=helper(ind+1,s,count+1,dp);
        }
        if (s[ind]==')'){
            return dp[ind][count]=helper(ind+1,s,count-1,dp);
        }

        return dp[ind][count]=helper(ind+1,s,count+1,dp) | helper(ind+1,s,count-1,dp) || helper(ind+1,s,count,dp);
    }
public:
    bool checkValidString(string s) {
        int n = s.size();
        vector<vector<int>> dp(n, vector<int> (n,-1));

        return helper(0,s,0,dp);
        
    }
};