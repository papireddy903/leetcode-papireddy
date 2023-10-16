class Solution {
    private:
    void solve(string op,vector<string>&ans,int open,int close,int n){
        if (open==0 && close==0){
            ans.push_back(op);
            return ;
        }
        if (open == close){
            solve(op+'(',ans,open-1,close,n);
        }
        else if (open == 0){
            solve(op+')',ans,open,close-1,n);
        }
        else if (close == 0){
            solve(op+"(",ans,open-1,close,n);
        }
        else{
            solve(op+'(',ans,open-1,close,n);
            solve(op+')',ans,open,close-1,n);
        }
        
    }
public:
    vector<string> generateParenthesis(int n) {

        vector<string> ans;
        int open = n, close = n;
        solve("",ans,open,close,n);
        return ans;
        
    }
};