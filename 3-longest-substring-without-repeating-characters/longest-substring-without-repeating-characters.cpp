class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0,j;
        int maxi = 0;
        unordered_map<char,int> mp;
        for (int j = 0;j < s.length(); j++){
            mp[s[j]]++;
            while(mp[s[j]]>1){
                mp[s[i++]]--;

            }
            maxi = max(maxi,j-i+1);
        }
        return maxi;
        }
};