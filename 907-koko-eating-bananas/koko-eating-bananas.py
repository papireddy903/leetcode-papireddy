class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:

        def isPossible(mid):
            total = 0 
            for i in range(len(piles)):
                total += math.ceil(piles[i] / mid) 

            if total <= h:
                return True
            else:
                return False

        
        left = 1 
        right = max(piles)

        while left < right:
            mid = left + (right - left) //2 

            if isPossible(mid):
                right = mid 
            else:
                left = mid+1 
        return left 