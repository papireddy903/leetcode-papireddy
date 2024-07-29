class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        
        count1 = count2 = 0 
        
        ele1 = ele2 = float('-inf')

        for i in range(len(nums)):
            
            if count1==0 and nums[i]!=ele2:
                count1 = 1 
                ele1 = nums[i] 
            
            elif count2 == 0 and nums[i]!=ele1:
                count2 = 1 
                ele2 = nums[i] 
            
            elif nums[i] == ele1:
                count1 += 1 
            
            elif nums[i] == ele2:
                count2 += 1 
            
            else:
                count1-=1 
                count2-=1 
        
        
        count1 = count2 = 0

        for num in nums:
            if num == ele1:
                count1+=1 
            elif num == ele2:
                count2+=1 
        n = len(nums)
        ans = []
        if count1>math.floor(n/3):
            ans.append(ele1)
        if count2>math.floor(n/3):
            ans.append(ele2)
    
        return ans
        
            