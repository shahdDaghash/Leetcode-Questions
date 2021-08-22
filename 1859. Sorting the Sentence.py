class Solution:
    def sortSentence(self, s: str) -> str:
        words = s.split(" ")
        resList = [None] * len(words)
        for word in words:
            ending = int(word[len(word)-1])
            resList[ending-1] = word
        res=""
        for one in resList:
            res += one[0:len(one)-1] + " "
        
        return res.strip()
        
