# https://helloacm.com/teaching-kids-programming-brick-layout-unlimited-knapsack-via-top-down-dynamic-programming-algorithm/
# https://binarysearch.com/problems/Brick-Layout
# MEDIUM, DP

class Solution:
    def solve(self, bricks, width, height):
        @cache
        def f(n):
            if n < 0:
                return 0
            if n == 0:
                return 1
            ans = 0
            for i in bricks:
                ans += f(n - i)
            return ans
        return f(width)**height
