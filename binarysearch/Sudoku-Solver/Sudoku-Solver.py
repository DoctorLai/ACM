# https://helloacm.com/just-another-sudoku-solver-in-depth-first-search-and-backtracking-algorithm/
# https://binarysearch.com/problems/Sudoku-Solver
# MEDIUM, DFS

class Solution:
    def solve(self, matrix):
        def dfs(matrix, idx, rows, cols, boxes):
            if idx == 81:
                return True
            r = idx // 9
            c = idx % 9
            br = r // 3
            bc = c // 3
            if matrix[r][c] != 0:
                return dfs(matrix, idx + 1, rows, cols, boxes)
            for i in range(1, 10):
                if i in rows[r]:
                    continue
                if i in cols[c]:
                    continue
                if i in boxes[br][bc]:
                    continue
                rows[r].add(i)
                cols[c].add(i)
                boxes[br][bc].add(i)
                matrix[r][c] = i            
                if dfs(matrix, idx + 1, rows, cols, boxes):
                    return True                    
                matrix[r][c] = 0
                rows[r].remove(i)
                cols[c].remove(i)
                boxes[br][bc].remove(i)
            return False
        rows = [set() for _ in range(9)]
        cols = [set() for _ in range(9)]
        boxes = [[set() for _ in range(3)] for _ in range(3)]
        for r in range(9):
            for c in range(9):
                if matrix[r][c] != 0:
                    rows[r].add(matrix[r][c])
                    cols[c].add(matrix[r][c])
                    boxes[r//3][c//3].add(matrix[r][c])
        if dfs(matrix, 0, rows, cols, boxes):
            return matrix
        return None
