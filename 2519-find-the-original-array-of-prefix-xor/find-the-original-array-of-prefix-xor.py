class Solution:
    def findArray(self, pref: List[int]) -> List[int]:
        n = len(pref)
        arr = [0]*n 
        arr[0] = pref[0]

        for i in range(1,n):
            
            arr[i] = pref[i] ^ pref[i-1] 

            
        
        return arr

        
        # pref[i] = arr[0] ^ arr[1] ^ arr[2]... ^ arr[i]
        # pref[i-1] = arr[0] ^ arr[1] ^ arr[2] .... ^ arr[i-1]

        # we can get arr[i] by doing xor of pref[i] ^ pref[i-1] (same elements get cancelled, leaving arr[i])


        