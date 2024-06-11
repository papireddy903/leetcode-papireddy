class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        dic = dict()

        for i in arr1:
            if i in dic:
                dic[i] +=1 
            else:
                dic[i] = 1

        ans = []

        keys = [i for i,j in dic.items()]
        
        u_keys = list(set(keys)) 

        # print(u_keys) 

        other_keys = [i for i in arr1 if i not in arr2]

        other_keys.sort()

        print(other_keys)
        print(dic)

        for i in arr2:
            while dic[i] > 0:
                ans.append(i)
                dic[i] -= 1

        ans.extend(other_keys)

        return ans

