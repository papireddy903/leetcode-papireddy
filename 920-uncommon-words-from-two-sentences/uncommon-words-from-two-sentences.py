class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        
        l1 = s1.split(' ')
        l2 = s2.split(' ')

        s = set()

        for i in l1:
            if i not in l2 and l1.count(i)==1:
                s.add(i) 
        for j in l2:
            if j not in l1 and l2.count(j)==1:
                s.add(j)

        return list(s)