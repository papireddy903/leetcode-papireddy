class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector<int> mp1(26,0), mp2(26,0);
        for (int i = 0;i<s1.size();i++){
            mp1[s1[i]-'a']++;
            mp2[s2[i]-'a']++;
        }

        for (int i = s1.size();i<s2.size();i++){
            if (mp1 == mp2){
                return true;
            }

            mp2[s2[i - s1.size()]-'a']--;
            mp2[s2[i]-'a']++;
        }
        
        return mp1 == mp2;
        
    }
};