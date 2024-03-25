class Solution:
    def romanToInt(self, s: str) -> int:
        dic = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000
        }
        ans = 0
        i = 0
        if (len(s) == 1): 
            return dic[s[0]]
        while i<len(s)-1:
            if (dic[s[i]] < dic[s[i+1]]):
                ans += dic[s[i+1]] - dic[s[i]] 
                i+=2
            else:
                ans += dic[s[i]]
                i+=1

            if (i == len(s) - 1):
                ans += dic[s[i]]
            print(ans)
        return ans


