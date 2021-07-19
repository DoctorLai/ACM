# https://helloacm.com/teaching-kids-programming-maximum-number-of-words-you-can-type/
# https://leetcode.com/problems/maximum-number-of-words-you-can-type/
# EASY, HASH MAP

class Solution:
    def canBeTypedWords(self, text: str, brokenLetters: str) -> int:
        b = set(brokenLetters)
        ans = 0
        for i in text.split(' '):
            if all(j not in b for j in i):
                ans += 1
        return ans
