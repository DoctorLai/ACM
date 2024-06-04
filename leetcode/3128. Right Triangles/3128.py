# https://helloacm.com/teaching-kids-programming-using-hash-map-to-count-the-right-triangles-in-a-binary-matrix/
# https://leetcode.com/problems/right-triangles/
# MEDIUM, HASH MAP, MATH

class Solution:
    def numberOfRightTriangles(self, grid: List[List[int]]) -> int:
        rows = len(grid)
        cols = len(grid[0])

        r = Counter()
        c = Counter()
        for rr in range(rows):
            for cc in range(cols):
                if grid[rr][cc]:
                    r[rr] += 1
                    c[cc] += 1

        ans = 0
        for rr in range(rows):
            for cc in range(cols):
                if grid[rr][cc]:
                    ans += (r[rr]-1) * (c[cc]-1)
        
        return ans
