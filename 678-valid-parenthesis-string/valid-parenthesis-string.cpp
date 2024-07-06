class Solution {
public:
    bool checkValidString(string s) {
        int min = 0, max = 0;
        
        for (int i = 0;i<s.size();i++){
            if (s[i] == '('){
                min++; max++;
            }
            else if (s[i] == ')') {
                // Closing parenthesis decreases both min and max
                min--;
                max--;
            } else if (s[i] == '*') {
                // Asterisk can be '(', ')' or empty
                min--;  // Treat as ')'
                max++;  // Treat as '('
            }
            if (min < 0) min = 0;
            if (max < 0) return false;
        }
        return min==0;
        
    }
};