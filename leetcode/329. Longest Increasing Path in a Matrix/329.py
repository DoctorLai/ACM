# https://helloacm.com/teaching-kids-programming-longest-increasing-path-in-a-matrix-via-top-down-dynamic-programming-algorithm/
# https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
# HARD, DP

class Solution:
    def longestIncreasingPath(self, matrix: List[List[int]]) -> int:
        rows = len(matrix)        
        if not rows:
            return 0
        cols = len(matrix[0])
        if not cols:
            return 0

        @cache
        def f(r, c):
            ans = 1
            for dr, dc in ((1, 0), (0, 1), (-1, 0), (0, -1)):
                nr = r + dr
                nc = c + dc
                if 0 <= nr < rows and 0 <= nc < cols and matrix[r][c] < matrix[nr][nc]:
                    ans = max(ans, 1 + f(nr, nc))
            return ans

        ans = 1
        for r in range(rows):
            for c in range(cols):
                ans = max(ans, f(r, c))

        return ans
