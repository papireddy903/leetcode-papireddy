class Solution {
    private:
    string solve(int l, int r, string &s, int n){
        string max_s = "";
        int maxi = 0;
        while (l>=0 and r<n and s[l]==s[r]){
            if (r-l+1 > maxi){
                maxi = r-l+1;
                max_s = s.substr(l,r-l+1);
            }
            l--; r++;
        }
        return max_s;
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        string palindrome = "";
        string ans1 = "", ans2="";
        for (int i = 0;i<n;i++){
            ans1 = solve(i,i+1,s,n);
            ans2 = solve(i,i,s,n);

            if (ans1.size() > palindrome.size()){
                palindrome = ans1;
            }

            if (ans2.size() > palindrome.size()){
                palindrome = ans2;
            }

            
        }
        return palindrome;
        
    }
};