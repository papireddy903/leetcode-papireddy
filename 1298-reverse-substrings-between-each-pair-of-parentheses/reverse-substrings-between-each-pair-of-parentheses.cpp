class Solution {
    private:
    string reverse(string s){
        int i = 0, j = s.size()-1;
        while (i<=j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
public:
    string reverseParentheses(string s) {
        stack<char> st;
        int i = 0;
        int n = s.size();

        while (i<n){
            
            if (s[i]==')'){
                string temp = "";
                while (!st.empty() and st.top()!='('){
                    temp += st.top();
                    st.pop();
                    
                }
                if (!st.empty()){
                    st.pop();
                }
                for (int i = 0;i<temp.size();i++){
                    st.push(temp[i]);
                }
                
            }
            else{
                st.push(s[i]);
            }
            i++;
            
        }

        string ans = "";
        while (!st.empty()){
            ans += st.top();
            st.pop();
        }
        return reverse(ans);

        
    }
};
