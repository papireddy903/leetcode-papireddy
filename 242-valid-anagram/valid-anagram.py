class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False 

        dic = dict()

        for i in range(len(s)):
            if s[i] in dic:
                dic[s[i]] = dic[s[i]] + 1 
            else:
                dic[s[i]] = 1 
            
        for i in range(len(t)):
            if t[i] in dic:
                dic[t[i]]-=1 
            else:
                return False
        
        for i,j in dic.items():
            if j >=1:
                return False 
        return True