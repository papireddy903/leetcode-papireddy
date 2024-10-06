class Solution:
    def areSentencesSimilar(self, sentence1: str, sentence2: str) -> bool:
        
        words1 = sentence1.split(" ")
        words2 = sentence2.split(" ")

        len1 = len(words1)
        len2 = len(words2)

        if len2 < len1:
            words1, words2 = words2, words1 
        
        i = 0
        while i<len(words1) and words2[i] == words1[i]:
            i+=1 
        
        j = 0
        while j<len(words1) and words2[-(j+1)] == words1[-(j+1)]:
            j+=1 
        
        return i+j >= len(words1)
        

        
        

        

        