# https://helloacm.com/teaching-kids-programming-largest-substring-between-two-equal-characters-hash-map/
# https://leetcode.com/problems/largest-substring-between-two-equal-characters/
# EASY, HASH MAP

class Solution:
    def maxLengthBetweenEqualCharacters(self, s: str) -> int:
        seen = {}
        ans = -1
        for i, v in enumerate(s):
            if v in seen:
                ans = max(ans, i - seen[v] - 1)
            else:
                seen[v] = i
        return ans
