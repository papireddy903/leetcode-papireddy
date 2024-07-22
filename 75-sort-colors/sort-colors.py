class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zero_count = 0 
        one_count = 0 
        two_count = 0 
        for i in nums:
            if i == 0:
                zero_count+=1 
            elif i==1:
                one_count+=1 
            else:
                two_count+=1 
        
        i = 0 
        nums[i:zero_count] = [0]*zero_count 
        i+=zero_count
        nums[i:i+one_count] = [1]*one_count
        i+=one_count 
        nums[i:i+two_count] = [2]*two_count
        
        