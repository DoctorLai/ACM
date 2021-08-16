# https://helloacm.com/teaching-kids-programming-island-shape-perimeter/
# https://binarysearch.com/problems/Island-Shape-Perimeter
# MEDIUM, MATH

class Solution:
    def solve(self, matrix):
        ans = 0
        rows = len(matrix)
        if 0 == rows:
            return 0
        cols = len(matrix[0])
        if cols == 0:
            return 0
        for r in range(rows):
            for c in range(cols):
                if matrix[r][c] == 1:
                    ans += 4
                    if r > 0 and matrix[r-1][c] == 1:                    
                        ans -= 2
                    if c > 0 and matrix[r][c-1] == 1:
                        ans -= 2
        return ans
