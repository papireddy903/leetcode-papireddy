class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        n = len(nums)

        # 2 2 1 1 2 2 2 3 4
        
        candidate = nums[0]
        count = 1

        for i in range(1,n):
            if nums[i] == candidate:
                count+=1 
            
            else:
                count -= 1 
            
            if count<=0:
                count = 1
                candidate = nums[i]
        
        return candidate
        