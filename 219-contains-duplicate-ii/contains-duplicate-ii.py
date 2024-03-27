class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        temp = dict()

        for i in range(len(nums)):
            if nums[i] in temp:
                diff = abs(temp[nums[i]] - i) 
                if diff <= k:
                    return True 
            temp[nums[i]] = i
        return False
