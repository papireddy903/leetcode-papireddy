class Solution:
    def getLucky(self, s: str, k: int) -> int:
        num_str = ""
        for i in s:
            num_str += str(ord(i)-ord('a')+1)
        summ = 0
        while k>0:
            summ = 0
            for i in num_str:
                summ += int(i)
            
            num_str = str(summ) 
            k-=1 
        return summ
        