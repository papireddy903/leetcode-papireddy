class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long summ = 0;
        for (int i = 0;i<chalk.size();i++){
            summ += chalk[i];
        }
        
        int new_k = k%summ;
        for (int i = 0;i<chalk.size();i++){
            if (new_k < chalk[i]){
                return i;
            }
            new_k -= chalk[i];
        }
        return 0;
        
    }
};