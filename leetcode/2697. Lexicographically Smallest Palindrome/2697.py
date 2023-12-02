# https://helloacm.com/teaching-kids-programming-algorithms-to-find-the-lexicographically-smallest-palindrome/
# https://leetcode.com/problems/lexicographically-smallest-palindrome/
# EASY, TWO POINTER

class Solution:
    def makeSmallestPalindrome(self, s: str) -> str:
        s = list(s)
        n = len(s)
        for i in range(n//2):
            s[i] = s[~i] = min(s[i], s[~i])
        return "".join(s)
