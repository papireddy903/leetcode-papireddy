class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        
        largest_sum = float('-inf') 
        cur_sum = 0

        for i in range(len(nums)):
            cur_sum += nums[i]

            if cur_sum > largest_sum:
                largest_sum = cur_sum 
            
            if cur_sum < 0:
                cur_sum = 0 
            
        return largest_sum 
