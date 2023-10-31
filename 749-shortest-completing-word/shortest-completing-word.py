class Solution:
    def wordCheck(self, lis: List[str],word: str)-> int:
        temp=list(lis)
        for i in word:
            if i in temp:
                temp.remove(i)
                if len(temp)==0:
                    return 1
        return 0
        
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        lis=[]
        minLen=inf
        res=""
        for i in licensePlate:
            if (i>="A" and i<="Z") or (i>='a' and i<='z'):
                lis.append(i.lower())
        for i in words:
            if(Solution.wordCheck(self,lis,i)):
                if minLen>len(i):
                    minLen=len(i)
                    res=i
        return res
                