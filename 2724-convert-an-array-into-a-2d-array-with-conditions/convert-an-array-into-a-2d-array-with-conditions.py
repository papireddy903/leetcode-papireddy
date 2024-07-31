class Solution:
    def findMatrix(self, nums: List[int]) -> List[List[int]]:
        
        dic = Counter(nums)
        maxi = max(dic.values())
        ans = []
        for _ in range(maxi):
            temp = []

            for i,j in dic.items():
                if j>0:
                    temp.append(i)
                    dic[i]-=1 
            ans.append(temp)
        return ans



             
            


            