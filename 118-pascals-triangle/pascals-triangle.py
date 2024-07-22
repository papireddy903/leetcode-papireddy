class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        n = numRows
        if n==1:
            return [[1]]
        if n==2:
            return [[1],[1,1]]

        ans = [[1], [1,1]]

        for i in range(2,n):
            temp = []
            
            temp.append(1)
            for j in range(1,i):
                temp.append(ans[i-1][j-1] + ans[i-1][j])

            temp.append(1)
            ans.append(temp)
        return ans

