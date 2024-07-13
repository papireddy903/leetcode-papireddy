class Solution:
    def shortestSequence(self, rolls: List[int], k: int) -> int:
        
        s = set()
        count = 0 
        for i in rolls:
            s.add(i)

            if len(s)==k:
                count+=1 
                s.clear()

        return count+1