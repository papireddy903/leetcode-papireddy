class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        sorted_order = sorted(intervals, key=lambda x: x[0])

        ans = []
        ans.append(sorted_order[0])
        # print(ans)

        for i in range(1,len(sorted_order)):
            if ans[-1][1] >= sorted_order[i][0]:
                ans[-1][1] = max(ans[-1][1], sorted_order[i][1])
            else:
                ans.append(sorted_order[i])        


        return ans