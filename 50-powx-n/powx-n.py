class Solution:
    def myPow(self, x: float, n: int) -> float:
        
        ans = float(1)
        nn = n
        if nn<0:
            nn = -1*n 
        
        while nn>0:
            if nn%2==0:
                x = x*x 
                nn = nn//2 
            
            else:
                ans = ans*x 
                nn -=1 
        
        if n<0:
            return 1 / ans 
        
        return ans
        

        