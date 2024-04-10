class Solution:
    def splitNum(self, num: int) -> int:
        tot = 0
        s = str(num)
        l = sorted(s)
        t = ''
        t2= ''
        for i in range(len(l)):
            if i%2==0:
                t += l[i] 
            else:
                t2 += l[i] 
        return int(t) + int(t2)


