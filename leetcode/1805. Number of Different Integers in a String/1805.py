# https://helloacm.com/counting-the-number-of-different-integers-in-a-string/
# https://leetcode.com/problems/number-of-different-integers-in-a-string/
# EASY, STRING

class Solution:
    def numDifferentIntegers(self, word: str) -> int:
        if len(word) == 0:
            return 0
        a = set()
        s = ""
        for i in word:
            if i.isdigit():
                s += i
            else:
                s += " "
        return len(set(map(int, s.split())))
