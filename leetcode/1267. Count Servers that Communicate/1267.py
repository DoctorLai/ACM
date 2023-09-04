# https://helloacm.com/teaching-kids-programming-count-servers-that-communicate-hash-map-counter/
# https://leetcode.com/problems/count-servers-that-communicate/
# MEDIUM, HASH MAP

class Solution:
    def countServers(self, grid: List[List[int]]) -> int:
        rc = Counter()
        cc = Counter()
        rows = len(grid)
        cols = len(grid[0])

        for r in range(rows):
            for c in range(cols):
                if grid[r][c]:
                    rc[r] += 1
                    cc[c] += 1

        ans = 0
        for r in range(rows):
            for c in range(cols):
                if grid[r][c] and (rc[r] > 1 or cc[c] > 1):
                    ans += 1

        return ans
