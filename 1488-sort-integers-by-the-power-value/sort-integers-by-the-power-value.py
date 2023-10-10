class Solution:
    def powerVal(self,val):
        count = 0
        while val!=1:
            if val%2==0:
                val = val//2 
            else:
                val = val*3 + 1 
            count+=1
        return count

    def getKth(self, lo: int, hi: int, k: int) -> int:
        dic = {}
        for i in range(lo,hi+1):
            power = self.powerVal(i)
            dic[i] = power 
        
        sortedPowers = sorted(dic.items(), key = lambda x:x[1] )
        # print(sortedPowers)

        return sortedPowers[k-1][0]

            
        
        
        
        