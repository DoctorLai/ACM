# https://helloacm.com/teaching-kids-programming-binary-search-algorithm-to-eat-bananas-apples-in-k-hours/
# https://binarysearch.com/problems/Eat-Bananas-in-K-Hours
# MEDIUM, BINARY SEARCH

class Solution:
    def solve(self, piles, k):
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
