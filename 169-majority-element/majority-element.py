class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)
        dic = Counter(nums)
        
        for i,j in dic.items():
            if j>n/2:
                return i 
        return 0