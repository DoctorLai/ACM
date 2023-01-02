# https://helloacm.com/teaching-kids-programming-check-if-there-is-a-path-with-equal-number-of-0s-and-1s-maze-recursion-dynamic-programming/
# https://leetcode.com/problems/check-if-there-is-a-path-with-equal-number-of-0s-and-1s/
# MEDIUM, DP

class Solution:
    def isThereAPath(self, grid: List[List[int]]) -> bool:
        rows = len(grid)
        cols = len(grid[0])
        
        if (rows + cols - 1) & 1:
            return False
        
        @cache
        def dfs(i, j, d):
            # d += 1 if grid[i][j] == 1 else -1
            d += (-1, 1)[grid[i][j]]
            if i == 0 and j == 0:
                return d == 0
            if i > 0 and dfs(i - 1, j, d):
                return True
            if j > 0 and dfs(i, j - 1, d):
                return True
            return False
        
        return dfs(rows - 1, cols - 1, 0)
