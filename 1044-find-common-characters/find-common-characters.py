class Solution:
    def commonChars(self, words: List[str]) -> List[str]:
        ans = []
        
        freq1 = Counter(words[0])
        for i in range(1,len(words)):
            freq1 = freq1 & Counter(words[i])
        # print(freq1)
        for i,j in freq1.items():
            # print(i,j)
            for c in range(j):
                ans.append(i)
        return ans

                
    # b = 1    b = 1    r = 2
    # e = 1    e = 1    o = 1 
    # l = 2    l =  2   l = 2 
    # a = 1    a =  1   e = 1

