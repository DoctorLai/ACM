# https://helloacm.com/teaching-kids-programming-depth-first-search-algorithm-to-count-the-number-of-islands/
# https://binarysearch.com/problems/Number-of-Islands
# MEDIUM, DFS

class Solution:
    def solve(self, matrix):
        rows, cols = len(matrix), len(matrix[0])
        def dfs(r, c):
            if r < 0 or c < 0 or r == rows or c == cols:
                return 0
            if matrix[r][c] == 0:
                return 0
            matrix[r][c] = 0
            dfs(r - 1, c)
            dfs(r + 1, c)
            dfs(r, c - 1)
            dfs(r, c + 1)
            return 1
        ans = 0
        for r in range(rows):
            for c in range(cols):
                ans += dfs(r, c)
        return ans
