# https://helloacm.com/teaching-kids-programming-dynamic-programming-algorithm-to-compute-the-triangle-minimum-path-sum/
# https://leetcode.com/problems/triangle/
# MEDIUM, DP

class Solution:
    def minimumTotal(self, triangle: List[List[int]]) -> int:
        @cache
        def f(r, c):
            if r == len(triangle) - 1:
                return triangle[r][c]
            return min(f(r + 1, c), f(r + 1, c + 1)) + triangle[r][c]
        return f(0, 0)
