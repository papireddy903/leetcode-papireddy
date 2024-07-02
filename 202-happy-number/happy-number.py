class Solution:
    def find(self,temp):
        summ = 0
        num = str(temp)
        for i in num:
            summ += int(i)*int(i)
        return summ

    def isHappy(self, n: int) -> bool:
        temp = n 
        l = []
        
        while n!=1:
            n = sum([int(i)**2 for i in str(n)])
            if n==1:
                return True
            if n in l:
                return False 
            l.append(n)
        
        if n==1:
            return True
            



        