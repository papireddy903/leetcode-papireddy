class Solution:
    def hammingDistance(self, x: int, y: int) -> int:
        or_op = x ^ y 

        print(or_op) 
        count = 0 
        while or_op:
            count += or_op & 1 
            or_op>>=1 
        return count 