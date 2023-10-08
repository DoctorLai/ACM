# https://helloacm.com/teaching-kids-programming-compute-the-amount-of-water-of-a-glass-in-a-pyramid-stacked-glasses-top-down-dynamic-programming-algorithm-recursion-with-memoization/
# https://leetcode.com/problems/champagne-tower/
# MEDIUM, DP

class Solution:
    def champagneTower(self, a: int, r: int, c: int) -> float:

        @cache
        def f(r, c):
            if c < 0 or c > r:
                return 0, 0
            if r == 0:
                return max(a - 1, 0), min(a, 1)
            e1, _ = f(r - 1, c)
            e2, _ = f(r - 1, c - 1)
            total = (e1 + e2)*0.5
            return max(total - 1, 0), min(total, 1)
        
        return f(r, c)[1]

