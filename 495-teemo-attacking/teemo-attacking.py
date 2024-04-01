class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        ans = duration * len(timeSeries) 
        for i in range(len(timeSeries)-1):
            if (timeSeries[i+1] - timeSeries[i] < duration):
                ans -= duration - timeSeries[i+1] + timeSeries[i] 
        return ans 

        