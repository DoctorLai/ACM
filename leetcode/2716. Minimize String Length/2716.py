# https://helloacm.com/teaching-kids-programming-algorithms-to-minimize-string-length-hash-set/
# https://leetcode.com/problems/minimize-string-length/
# EASY, HASH MAP

class Solution:
    def minimizedStringLength(self, s: str) -> int:
        return len(set(s))
