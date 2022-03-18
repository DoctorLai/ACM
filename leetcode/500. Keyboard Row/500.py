# https://helloacm.com/teaching-kids-programming-words-that-can-be-typed-using-a-single-keyboard-row-hash-set/
# https://leetcode.com/problems/keyboard-row/
# EASY, HASH MAP

class Solution:
    def findWords(self, words: List[str]) -> List[str]:
        ans = []
        rows = [set("qwertyuiop"), set("asdfghjkl"), set("zxcvbnm")]
        
        def singleRow(w):
            r = set()
            for x in w:
                for i, c in enumerate(rows):
                    if x in c:
                        r.add(i)
                        break
            return len(r) == 1
                        
        for w in words:
            if singleRow(w.lower()):
                ans.append(w)
        return ans
