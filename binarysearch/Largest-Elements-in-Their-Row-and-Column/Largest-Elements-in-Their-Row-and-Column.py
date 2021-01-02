# https://helloacm.com/algorithms-to-count-the-largest-elements-in-their-row-and-column-in-a-matrix/
# https://binarysearch.com/problems/Largest-Elements-in-Their-Row-and-Column
# EASY, MATH

class Solution:
    def solve(self, matrix):
        ans = 0
        row = len(matrix)
        col = len(matrix[0])
        rows = set()
        cols = set()
        for r in range(row):
            for c in range(col):
                if matrix[r][c] == 1:
                    rows.add(r)
                    cols.add(c)
        for r in range(row):
            for c in range(col):
                if matrix[r][c] == 0:
                    continue
                if len(rows) == 1 and len(cols) == 1:
                    ans += 1
        return ans
