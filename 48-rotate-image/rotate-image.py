class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """

        ans = []
        n = len(matrix)
        ni = 0
        nj = 0
        for j in range(n):
            temp = []
            for i in range(n-1,-1,-1):
                temp.append(matrix[i][j])
            ans.append(temp)
        print(ans)

        for i in range(len(ans)):
            for j in range(len(ans)):
                matrix[i][j] = ans[i][j] 
                



        