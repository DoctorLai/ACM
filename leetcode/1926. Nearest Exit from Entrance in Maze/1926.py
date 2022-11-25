# https://helloacm.com/teaching-kids-programming-nearest-exit-from-entrance-in-maze-via-breadth-first-search-algorithm/
# https://leetcode.com/problems/nearest-exit-from-entrance-in-maze/
# MEDIUM, BFS

class Solution:
    def nearestExit(self, maze: List[List[str]], entrance: List[int]) -> int: 
        rows = len(maze)
        assert rows > 0
        cols = len(maze[0])
        assert cols > 0

        def isExit(r, c):
            if r == 0 or c == 0 or r == rows - 1 or c == cols - 1:
                return maze[r][c] == '.'
            return False

        q = deque([(entrance, 0)])

        while q:
            (r, c), d = q.popleft()
            for dr, dc in ((0, 1), (1, 0), (0, -1), (-1, 0)):
                nr, nc = dr + r, dc + c
                if nr < 0 or nc < 0 or nr == rows or nc == cols:
                    continue
                if maze[nr][nc] == '.':
                    q.append(((nr, nc), d + 1))
                    if (nr, nc) != tuple(entrance) and isExit(nr, nc):
                        return d + 1                   
                    # set it to wall
                    maze[nr][nc] = '+'
        return -1
