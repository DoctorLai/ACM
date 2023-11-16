# https://helloacm.com/teaching-kids-programming-generate-a-string-with-characters-that-have-odd-counts/
# https://leetcode.com/problems/generate-a-string-with-characters-that-have-odd-counts/
# EASY, STRING

class Solution:
    def generateTheString(self, n: int) -> str:
        if n & 1:
            return "a"*n
        return "a"*(n-1) + "b"
