class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        dic = Counter(arr)
        pos = 0
        for i,j in dic.items():
            if j==1:
                pos+=1 
            
            if pos == k:
                return i 
        return ""
