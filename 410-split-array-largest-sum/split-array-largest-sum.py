class Solution:
    
    def splitArray(self, nums: List[int], k: int) -> int:
        def isPossible(mid):
            total = 0
            count = 1
            for i in range(len(nums)):
                total += nums[i]

                if total > mid:
                    total = nums[i]
                    count+=1

                    if count > k:
                        return False 
            return True 
        
        left = max(nums)
        right = sum(nums)

        while left < right:
            mid = left + (right-left)//2 

            if isPossible(mid):
                right = mid
            else:
                left = mid+1 

        return left 