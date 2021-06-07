# https://helloacm.com/teaching-kids-programming-rotate-a-2d-matrix-image-90-degree-clockwise/
# https://leetcode.com/problems/rotate-image/
# MEDIUM, MATH

class Solution:    
    def rotate(self, matrix: List[List[int]]) -> None:
        if not matrix:
            return
        rows = len(matrix)
        cols = len(matrix[0])
        for r in range(rows):
            for c in range(r):
                matrix[r][c], matrix[c][r] = matrix[c][r], matrix[r][c]
                
        for r in range(rows):
            for c in range(cols//2):
                matrix[r][c], matrix[r][cols - c - 1] = matrix[r][cols - c - 1], matrix[r][c]
