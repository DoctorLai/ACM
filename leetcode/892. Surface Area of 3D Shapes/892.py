# https://helloacm.com/teaching-kids-programming-algorithms-to-count-surface-area-of-3d-shapes-geometry-and-math/
# https://leetcode.com/problems/surface-area-of-3d-shapes/
# EASY, MATH

class Solution:
    def surfaceArea(self, grid: List[List[int]]) -> int:
        n, res = len(grid), 0
        for i in range(n):
            for j in range(n):
                if grid[i][j]: 
                    res += 2 + grid[i][j] * 4
                if i: 
                    res -= min(grid[i][j], grid[i - 1][j]) * 2
                if j: 
                    res -= min(grid[i][j], grid[i][j - 1]) * 2
        return res
