# https://leetcode.com/problems/minimum-knight-moves/
# https://helloacm.com/teaching-kids-programming-top-down-dynamic-programming-algorithm-to-compute-the-min-number-of-knight-moves/
# MEDIUM, DP

class Solution:
    def minKnightMoves(self, x: int, y: int) -> int:
        @cache
        def dfs(x, y):
            if x == 0 and y == 0:
                return 0
            elif (x, y) in ((1, 1), (0, 2), (2, 0)):
                return 2
            else:
                return min(dfs(abs(x - 1), abs(y - 2)), dfs(abs(x - 2), abs(y - 1))) + 1
        return dfs(abs(x), abs(y))
