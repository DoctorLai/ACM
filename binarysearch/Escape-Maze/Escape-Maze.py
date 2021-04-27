# https://helloacm.com/teaching-kids-programming-escape-maze-by-breadth-first-search-algorithm/
# https://binarysearch.com/problems/Escape-Maze
# MEDIUM, BFS

class Solution:
    def solve(self, matrix):
        if not matrix:
            return -1
        rows = len(matrix)
        cols = len(matrix[0])
        if matrix[0][0] == 1 or matrix[-1][-1] == 1:
            return -1
        q = deque([(0, 0, 1)])
        vis = set()
        while q:
            r, c, s = q.popleft()
            if r == rows - 1 and c == cols - 1:
                return s
            if (r, c) in vis:
                continue
            vis.add((r, c))
            for dr, dc in [(1, 0), (0, 1), (-1, 0), (0, -1)]:
                nr = r + dr
                nc = c + dc
                if 0 <= nr < rows and 0 <= nc < cols and matrix[nr][nc] != 1:
                    q.append((nr, nc, s + 1))
        return -1
