# https://helloacm.com/teaching-kids-programming-recursive-depth-first-search-algorithm-to-count-the-surrounded-islands/
# https://binarysearch.com/problems/Surrounded-Islands
# MEDIUM, DFS

class Solution:
    def solve(self, matrix):
        if not matrix:
            return 0
        rows, cols = len(matrix), len(matrix[0])

        def dfs(r, c):
            if r < 0 or c < 0 or r >= rows or c >= cols:
                return
            if not matrix[r][c]:
                return 
            matrix[r][c] = 0
            for dx, dy in ((0, 1), (0, -1), (1, 0), (-1, 0)):
                dfs(r + dx, c + dy)

        for r in range(rows):
            if matrix[r][0]:
                dfs(r, 0)
            if matrix[r][cols - 1]:
                dfs(r, cols - 1)

        for c in range(cols):
            if matrix[0][c]:
                dfs(0, c) 
            if matrix[rows - 1][c]:
                dfs(rows - 1, c)

        ans = 0
        for r in range(1, rows - 1):
            for c in range(1, cols - 1):
                if matrix[r][c]:
                    dfs(r, c)
                    ans += 1                    
        return ans
