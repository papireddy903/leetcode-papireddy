class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int ans = 0;
        for (int i = 0;i<n;i++){
            int num = columnTitle[i] - 'A' + 1;
            cout << num << endl;
            ans = ans * 26 + num;
            cout << ans << endl;
            }
        return ans;

        
    }
};