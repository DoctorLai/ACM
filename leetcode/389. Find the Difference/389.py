# https://helloacm.com/teaching-kids-programming-find-the-difference-of-two-almost-same-strings/
# https://leetcode.com/problems/find-the-difference/
# EASY, XOR

class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        ans = 0
        for i in s + t:
            ans ^= ord(i)
        return chr(ans)
