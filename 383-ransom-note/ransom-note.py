class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        dic2 = dict() 
        flag = 0 
        for i in magazine:
            if i in dic2:
                dic2[i] += 1
            else:
                dic2[i] = 1 

        print(dic2)
        for i in ransomNote:
            if (i in dic2) and dic2[i] > 0:
                dic2[i] -=1 
            else:
                return False  
        return True
            