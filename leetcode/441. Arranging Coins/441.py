# https://helloacm.com/teaching-kids-programming-build-progressive-stairs-row-by-row-via-simulation-binary-search-or-math-algorithm/
# https://leetcode.com/problems/arranging-coins/
# EASY, MATH

class Solution:
    def arrangeCoins(self, n: int) -> int:
        assert n >= 0
        return floor((2 * n + 0.25)**0.5 - 0.5)
