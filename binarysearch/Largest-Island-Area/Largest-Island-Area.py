# https://helloacm.com/teaching-kids-programming-depth-first-search-algorithm-to-find-the-largest-land/
# https://binarysearch.com/problems/Largest-Island-Area
# MEDIUM, DFS

class Solution:
    def solve(self, matrix):
        rows = len(matrix)
        if not rows:
            return 0
        cols = len(matrix[0])
        if not cols:
            return 0
        def dfs(r, c):
            if r < 0 or c < 0 or r == rows or c == cols:
                return 0
            if matrix[r][c] == 0:
                return 0
            ans = 1
            matrix[r][c] = 0
            for dx, dy in ((1, 0), (0, 1), (-1, 0), (0, -1)):
                ans += dfs(r + dx, c + dy)
            return ans
        ans = 0
        for r in range(rows):
            for c in range(cols):
                ans = max(ans, dfs(r, c))
        return ans
