class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums)==0: return 0
        arr = sorted(nums)
        longest = 1 
        count = 0
        prev = float('-inf')
        for i in range(len(arr)):
            if prev == arr[i]-1:
                count+=1 
            elif prev!=arr[i]:
                count = 1 

            prev = arr[i] 

            longest = max(longest, count)
        return longest

        # 0 1 1 2 
        

