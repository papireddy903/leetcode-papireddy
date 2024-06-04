class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for (auto it: s){
            mp[it]++;
        }

        for (auto it: mp){
            cout << it.first << " "<<it.second << endl;
        }
        int count = 0;
        int flag = 0;
        for (auto it: mp){
            int val = it.second;

            if (val % 2==0 ){
                count+=val;
            }
            else{
                flag = 1;
                count += val - 1;
            }


        }

        if (flag == 0){
            return count;
        }
        return count+1;
        

        
    }
};