#include<stack>
class Solution {
    
public:
    bool isValid(string s) {

        stack<char> st;
        for (int i = 0;i<s.size();i++){
            if (s[i]=='(' or s[i]=='[' or s[i] =='{'){
                st.push(s[i]);
            }
            else{
                char top = st.top();
                if (!st.empty() and ((top=='(' and s[i]==')') or (top=='[' and s[i]==']') or (top=='{' and s[i] =='}'))){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if (st.empty()) return true;
        return false;
        
    }
};