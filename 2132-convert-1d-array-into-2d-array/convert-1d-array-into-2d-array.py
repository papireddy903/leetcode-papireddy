class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:

        ans = []
        l = len(original)
        if m*n < l:
            return []
        elif m*n==l:
            for i in range(0,l,n):
                
                ans.append(original[i:i+n])
        
        return ans

        