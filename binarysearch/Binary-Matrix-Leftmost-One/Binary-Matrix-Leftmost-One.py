# https://helloacm.com/teaching-kids-programming-binary-matrix-leftmost-one/
# https://binarysearch.com/problems/Binary-Matrix-Leftmost-One
# MEDIUM, MATH

class Solution:
    def solve(self, matrix):
        if not matrix:
            return -1
        rows = len(matrix)
        cols = len(matrix[0])
        r, c = 0, cols - 1
        ans = -1
        while r < rows and c >= 0:
            if matrix[r][c] == 1:
                ans = c
                c -= 1
            else:
                r += 1
        return ans
