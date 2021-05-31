# https://helloacm.com/teaching-kids-programming-substrings-of-size-three-with-distinct-characters/
# https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/
# EASY, STRING

class Solution:
    def countGoodSubstrings(self, s: str) -> int:
        return [s[i] != s[i - 1] and s[i - 1] != s[i - 2] and s[i - 2] != s[i] for i in range(2, len(s))].count(True)
