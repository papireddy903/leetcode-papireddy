class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        
        for i in range(len(nums)):
            ind = abs(nums[i]) - 1

            if nums[ind] > 0:
                nums[ind] = -nums[ind]
            else:
                return abs(nums[i]) 



    # 3 1 3 4 2

    # -3 1 -3 1 1  