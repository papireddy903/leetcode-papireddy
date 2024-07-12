class Solution {
    private:
    int countBA(string &s, char start, char end){
        stack<char> st;
        int count = 0;
        for (int i=0;i<s.size();i++){
            if (!st.empty() and s[i]==end and st.top()==start){
                count++;
                st.pop();
            }
            else{
                st.push(s[i]);
            }

        }
        // cout << count << endl;
        int i=0;
        while (!st.empty()){
            s[i] = st.top();
            st.pop();
            i++;
        }
        s.resize(i);
        reverse(s.begin(),s.end());
        return count;
    }
public:
    int maximumGain(string s, int x, int y) {
        int n = s.size();
        int ans = 0;
        if (y > x){
            ans += countBA(s,'b','a')*y;
            ans += countBA(s,'a','b')*x;
            

        }
        else{
            ans += countBA(s,'a','b')*x;
            ans += countBA(s,'b','a')*y;
        }

        return ans;
        
        

        
        
    }
};