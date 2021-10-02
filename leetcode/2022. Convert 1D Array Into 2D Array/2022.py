# https://helloacm.com/teaching-kids-programming-convert-1-d-array-to-2d-matrix-reshape-algorithm/
# https://leetcode.com/problems/convert-1d-array-into-2d-array/
# EASY, ARRAY

class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        if len(original) != m * n:
            return []
        t = 0
        ans = [[0 for _ in range(n)] for _ in range(m)]
        for r in range(m):
            for c in range(n):
                ans[r][c] = original[t]
                t += 1
        return ans
