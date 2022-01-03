# https://helloacm.com/teaching-kids-programming-check-if-all-as-appears-before-all-bs-itertools-groupby/
# https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/
# EASY, STRING

class Solution:
    def checkString(self, s: str) -> bool:
        return "ba" not in s
