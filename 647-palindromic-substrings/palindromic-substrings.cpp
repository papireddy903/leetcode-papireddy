class Solution {
    private:
    bool isPalindrome(string &s, int i, int j){
        while (i<j){
            if (s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
public:
    int countSubstrings(string s) {

        int count = 0;

        for (int i = 0;i<s.size();i++){
            for (int j = i ;j<s.size();j++){
                if (isPalindrome(s,i,j)){
                    count++;
                }
            }
        }
        return count;
        
    }
};