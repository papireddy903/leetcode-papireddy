class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dic = dict()

        for i in nums:
            if i in dic:
                dic[i] +=1 
            else:
                dic[i] = 1 
        ans = []
        sorted_dic = {k:v for k,v in sorted(dic.items(), key=lambda x:x[1], reverse=True)}
        print(sorted_dic)
        for i in sorted_dic: 
            ans.append(i)
            k-=1 
            if k==0:
                return ans 
                

        

