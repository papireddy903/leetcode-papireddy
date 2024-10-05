class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;

        for (char it : num){
            while (!st.empty() && k>0 && st.top() > it){
                st.pop();
                k--;
            }

            st.push(it);
        }

        while (k>0 && !st.empty()){
            st.pop();
            k--;
        }

        string ans;
        
        while (!st.empty()){
            ans += st.top();
            st.pop();
        }


        reverse(ans.begin(), ans.end());

        cout << ans << endl;
        
        if (ans.size()>1){
            int i = 0;
            while (ans[i] == '0'){
                i++;
            }

            ans = ans.substr(i, ans.size());
        }

        return ans.size()>0? ans: "0";







        
    }
};