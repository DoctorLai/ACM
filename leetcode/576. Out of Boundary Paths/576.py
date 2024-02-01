# https://helloacm.com/teaching-kids-programming-count-out-of-boundary-path-via-top-down-dynamic-programming-algorithm-recursion-with-memoization/
# https://leetcode.com/problems/out-of-boundary-paths/
# MEDIUM, DP, RECURSION, MEMOIZATION

class Solution:
    def findPaths(self, rows: int, cols: int, maxMove: int, startRow: int, startColumn: int) -> int:
        @cache
        def f(m, r, c):
            if r == rows or r < 0 or c == cols or c < 0:
                return 1
            if m == 0:
                return 0
            ans = f(m - 1, r - 1, c) + \
                f(m - 1, r + 1, c) + \
                f(m - 1, r, c - 1) + \
                f(m - 1, r, c + 1)
            return ans
        return f(maxMove, startRow, startColumn) % 1000000007
