# https://helloacm.com/teaching-kids-programming-binary-search-algorithm-to-eat-bananas-apples-in-k-hours/
# https://leetcode.com/problems/koko-eating-bananas/
# MEDIUM, BINARY SEARCH

class Solution:
    def minEatingSpeed(self, piles: List[int], k: int) -> int:
        def f(r):
            return sum(ceil(i / r) for i in piles)
        L = 1
        R = max(piles)
        while L < R:
            M = (L + R) // 2
            if f(M) <= k:
                R = M
            else:
                L = M + 1
        return L
