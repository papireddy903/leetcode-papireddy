class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {

        // -1 cases
        // frequency of all letters should be same
        unordered_map<char,int> mp;
        int n = croakOfFrogs.size();
        for (auto it : croakOfFrogs){
            mp[it]++;

            if(mp['c']<mp['r'] || mp['r']<mp['o'] || mp['o']<mp['a'] || mp['a']<mp['k'])
                return -1;
        }

        int checkFreq = mp[croakOfFrogs[0]];

        for (auto it : mp){
            if (it.second!=checkFreq){
                return -1;
            }
        }

        int ans = 0;
        int count = 0;

        for (int i = 0;i<n;i++){
            if (croakOfFrogs[i]=='c'){
                count++;
            }
            else if (croakOfFrogs[i]=='k'){
                count--;
            }

            ans = max(ans,count);
        }
        return ans;


        
        
    }
};