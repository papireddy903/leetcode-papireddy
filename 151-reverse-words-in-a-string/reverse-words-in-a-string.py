class Solution:
    def reverseWords(self, s: str) -> str:
        words = s.split()[::-1]
        # print(words)
        ans_str = ""
        # print(words)
        for i in words:
            ans_str += i + ' '
        
        # print(ans_str)
        return ans_str[:len(ans_str)-1]
        


        
        