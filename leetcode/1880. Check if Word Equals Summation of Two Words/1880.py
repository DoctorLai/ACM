# https://helloacm.com/teaching-kids-programming-check-if-word-equals-summation-of-two-words/
# https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/
# EASY, MATH

class Solution:
    def isSumEqual(self, firstWord: str, secondWord: str, targetWord: str) -> bool:        
        def f(s):
            g = {
                'a': 0,
                'b': 1,
                'c': 2,
                'd': 3,
                'e': 4,
                'f': 5,
                'g': 6,
                'h': 7,
                'i': 8,
                'j': 9
            }
            a = ""
            for i in s:
                a += str(g[i])
            return int(a)
        return f(firstWord) + f(secondWord) == f(targetWord)
