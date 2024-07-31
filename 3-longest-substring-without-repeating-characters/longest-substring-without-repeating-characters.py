class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        i = 0
        dic = dict()
        l = 0 
        for j in range(len(s)):

            if s[j] not in dic:
                dic[s[j]]=1 
            else:
                dic[s[j]]+=1 
            
            while dic[s[j]] > 1:
                dic[s[i]]-=1 
                i+=1
            
            l = max(l, j-i+1)

        return l

