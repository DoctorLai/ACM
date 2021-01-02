# https://helloacm.com/algorithms-to-count-the-largest-elements-in-their-row-and-column-in-a-matrix/
# https://binarysearch.com/problems/Largest-Elements-in-Their-Row-and-Column
# EASY, MATH

class Solution:
    def solve(self, matrix):
        ans = 0
        row = len(matrix)
        col = len(matrix[0])
        rows = [0 for _ in range(row)]
        cols = [0 for _ in range(col)]
        for r in range(row):
            for c in range(col):
                if matrix[r][c] == 1:
                    rows[r] += 1
                    cols[c] += 1
        for r in range(row):
            for c in range(col):
                if matrix[r][c] == 0:
                    continue
                if rows[r] == 1 and cols[c] == 1:
                    ans += 1
        return ans
