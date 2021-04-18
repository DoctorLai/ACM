# https://helloacm.com/teaching-kids-programming-sudoku-validator/
# https://binarysearch.com/problems/Sudoku-Validator
# MEDIUM, HASH TABLE

class Solution:
    def solve(self, matrix):
        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        boxes = [[set() for _ in range(3)] for _ in range(3)]
        for r in range(9):
            for c in range(9):
                x = matrix[r][c]
                if x < 1 or x > 9:
                    return False
                if x in rows[r]:
                    return False
                if x in cols[c]:
                    return False
                if x in boxes[r//3][c//3]:
                    return False
                rows[r].add(x)
                cols[c].add(x)
                boxes[r//3][c//3].add(x)
        return True
