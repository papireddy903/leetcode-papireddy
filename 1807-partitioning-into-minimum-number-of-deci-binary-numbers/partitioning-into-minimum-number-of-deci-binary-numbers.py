class Solution:
    def minPartitions(self, n: str) -> int:
        maxi = 0
        for i in n:
            i = int(i)
            if maxi < i:
                maxi = i 
        return maxi