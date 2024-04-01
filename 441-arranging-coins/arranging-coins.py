class Solution:
    def arrangeCoins(self, n: int) -> int:
        if n==1:
            return 1 
        
        # if n== 1 return 1 
        # if n== 2  return 1 
        # if n== 3 return 2 
        # if n==4 return 2 
        # if n==5 return 2 
        summ = 0
        i = 1
        count = 0 
        while summ <= n:
            summ = i * (i+1)//2 
            i+=1 
            count+= 1

        return count - 1


        

        


        