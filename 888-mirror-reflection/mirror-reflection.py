import math

class Solution:
    def mirrorReflection(self, length: int, width: int) -> int:
        lcm = length / math.gcd(width, length)
        height = (lcm * width) / float(length)
        
        if height % 2 == 1:
            if lcm % 2 == 0:
                return 2
            else:
                return 1
        return 0
