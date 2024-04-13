class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        asc = sorted(nums)
        desc = sorted(nums,reverse=True) 

        if (nums==asc or nums==desc):
            return True 
        return False 
        
