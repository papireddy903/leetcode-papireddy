class Solution {
public:
    int numSplits(string s) {
        int n = s.size();
        vector<int> left(n,0);
        vector<int> right(n,0);
        int count = 0;
        unordered_set<char> left_set;
        unordered_set<char> right_set;

        for (int i = 0;i<n;i++){
            left_set.insert(s[i]);
            left[i] = left_set.size();
        }

        for (int i = n-1;i>=0;i--){
            right_set.insert(s[i]);
            right[i] = right_set.size();
        }

        for (int i = 0;i<n-1;i++){
            if (left[i] == right[i+1]) count++;
        }
        return count;

        
        
    }
};