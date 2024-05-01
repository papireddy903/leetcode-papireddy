class Solution:
    def isPossible(self,weights, capacity):
        day = 1
        load = 0

        for i in range(len(weights)):
            if load + weights[i] > capacity:
                day +=1 
                load = weights[i] 
            else:
                load += weights[i] 
        return day





    def shipWithinDays(self, weights: List[int], days: int) -> int:
        
        capacity = max(weights) 
        high = sum(weights)

        while capacity <= high:
            mid = capacity + (high - capacity) //2 

            if self.isPossible(weights,mid) <= days: 
                high = mid - 1 
            else:
                capacity = mid+1 
        return capacity