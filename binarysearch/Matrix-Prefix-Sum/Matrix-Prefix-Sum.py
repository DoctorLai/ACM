# https://helloacm.com/teaching-kids-programming-matrix-prefix-sum-algorithm/
# https://binarysearch.com/problems/Matrix-Prefix-Sum
# EASY, MATH

class Solution:
    def solve(self, matrix):
        if not matrix:
            return []

        row = len(matrix)
        if 0 == row:
            return matrix
        col = len(matrix[0])
        if 0 == col:
            return matrix

        for r in range(row):
            matrix[r] = list(accumulate(matrix[r]))

        for r in range(1, row):
            for c in range(col):            
                matrix[r][c] += matrix[r - 1][c]

        return matrix
