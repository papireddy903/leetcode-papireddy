class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums)==0: return 0
        s = set(nums)
        longest = 1

        for num in s:
            if num-1 not in s:
                count = 1 
                cur = num 

                while cur+1 in s:
                    count+=1 
                    cur+=1 
                
                longest = max(longest, count)
        return longest

        
        

