class Solution:
    def frequencySort(self, s: str) -> str:
        dic = {}

        for ch in s:
            if ch in dic:
                dic[ch] += 1
            else:
                dic[ch] = 1 
        
        sorted_order = sorted(dic.items(), key = lambda x : x[1], reverse=True)
        print(sorted_order)
        # return ""
        ans = ""
        for p in sorted_order:
            ans += p[0]*p[1]
        return ans
        # for ele in sorted_order:


