class Solution {
    private: 
    void helper(int ind, string &digits, unordered_map<char,string> &m, string &temp, vector<string> &ans){
        if (ind == digits.size()){
           ans.push_back(temp);
           return; 
        }

        string temp_s = m[digits[ind]];

        for (int j = 0;j<temp_s.size();j++){

            temp.push_back(temp_s[j]);
            helper(ind+1, digits, m,temp, ans);
            temp.pop_back();
            
        }

}
    
public:
    vector<string> letterCombinations(string digits) {

        if (digits.size()==0){
            return {};
        }
        unordered_map<char,string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";

        string temp;
        vector<string> ans;
        helper(0,digits, m, temp, ans);
        return ans;

    }
};