# https://helloacm.com/teaching-kids-programming-set-matrix-zeroes/
# https://leetcode.com/problems/set-matrix-zeroes/
# MEDIUM, HASH MAP

class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        if not matrix:
            return
        rows = len(matrix)
        cols = len(matrix[0])
        rr = set()
        cc = set()
        for r in range(rows):
            for c in range(cols):
                if matrix[r][c] == 0:
                    rr.add(r)
                    cc.add(c)
        for r in range(rows):
            for c in range(cols):
                if r in rr or c in cc:
                    matrix[r][c] = 0
