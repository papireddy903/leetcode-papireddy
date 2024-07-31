class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        
        ans = []
        
        while nums:
            temp = set()
            for i in range(len(nums)-1,-1,-1):
                if nums[i] not in temp:
                    temp.add(nums[i])
                    nums.pop(i)
            ans.append(list(temp))
        return ans


             
            


            