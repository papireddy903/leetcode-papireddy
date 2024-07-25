class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:

        m = len(matrix)
        n = len(matrix[0])
        def binarySearchRow(matrix, row):
            l = 0
            h = n-1 
            while l<=h:
                mid = l+(h-l)//2 
                
                if (matrix[row][mid] == target):
                    return 1 
                
                elif matrix[row][mid] > target:
                    h = mid -1 
                else:
                    l = mid+1 

            return -1


        top = 0
        bottom = m-1 
        while top<=bottom:
            mid = top + (bottom - top)//2 

            if matrix[mid][n-1] >= target and matrix[mid][0] <= target:
                ind = binarySearchRow(matrix, mid)
                if ind==-1:
                    return False
                else:
                    return True
            
            elif matrix[mid][n-1] > target and matrix[mid][n-1] > target:
                bottom = mid-1 
            else:
                top = mid+1 
        return False

