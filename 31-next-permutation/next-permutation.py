class Solution:
    def nextPermutation(self, arr: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # 2 3 5 4 1 0 0
        
        n = len(arr)
        ind = -1
        for i in range(n-2,-1,-1):
            if (arr[i] < arr[i+1]):
                ind = i 
                break 
        if ind==-1:
            arr.reverse()
        else:
            for i in range(n-1,-1,-1):
                if arr[i] > arr[ind]:
                    arr[i],arr[ind] = arr[ind],arr[i] 
                    break 
            
            arr[ind+1:] = reversed(arr[ind+1:])



        
        