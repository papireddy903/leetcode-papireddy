class Solution:
    def findArray(self, pref: List[int]) -> List[int]:
        n = len(pref)
        pref_xor = [0]*n 
        pref_xor[0] = pref[0]

        for i in range(1,n):
            
            pref_xor[i] = pref[i] ^ pref[i-1] 

            
        
        return pref_xor


        