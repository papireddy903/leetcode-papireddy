class Solution:
    def removeOccurrences(self, s: str, part: str) -> str:
        ans = []
        m = len(part)
        for char in s:
            ans.append(char)

            if len(ans)>=m:
                flag = True 

                for i in range(m):
                    if (ans[-m+i] != part[i]):
                        flag = False
                        break 
                
                if flag:
                    p = 0
                    while p<len(part):
                        ans.pop()
                        p+=1 
        # print(ans)
        return "".join(ans)

        