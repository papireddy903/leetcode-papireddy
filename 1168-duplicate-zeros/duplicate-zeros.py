class Solution:
    def duplicateZeros(self, arr: List[int]) -> None:
        """
        Do not return anything, modify arr in-place instead.
        """
        
        n = len(arr)
        zeroes = 0
        new_arr = [0] * n
        
        for i in range(n):
            if arr[i] == 0:
                zeroes += 1
                continue
            if i + zeroes < n:
                new_arr[i + zeroes] = arr[i]
            else:
                break

        for i in range(n):
            arr[i] = new_arr[i]
