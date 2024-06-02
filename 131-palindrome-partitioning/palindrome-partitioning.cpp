class Solution {
    private:
    bool isPalindrome(string s, int start, int end){
        while (start <= end){
            if (s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void helper(int start, vector<string> &path, vector<vector<string>> &ans, string s){
        if (start == s.size()){
            ans.push_back(path);
            return;
        }

        for (int i = start;i<s.size();i++){
            if (isPalindrome(s,start,i)){
                path.push_back(s.substr(start, i-start+1));
                helper(i+1, path,ans,s);
                path.pop_back();

            }
        }
    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        helper(0,path,ans,s);
        return ans;
        
    }
};