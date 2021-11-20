# https://helloacm.com/teaching-kids-programming-multi-source-breadth-first-search-algorithm-minimum-number-of-moves-to-capture-the-king/
# https://binarysearch.com/problems/Number-of-Moves-to-Capture-the-King
# MEDIUM, BFS

class Solution:
    def solve(self, board):
        EMPTY = 0
        KNIGHT = 1
        KING = 2

        rows = len(board)
        cols = len(board[0])

        q = deque()
        for r in range(rows):
            for c in range(cols):
                if board[r][c] == KING:
                    q.append((r, c))

        ans = -1
        seen = set()
        while q:
            ans += 1
            n = len(q)
            for _ in range(n):
                r, c = q.popleft()
                if board[r][c] == KNIGHT:
                    return ans
                for dr, dc in ((1, -2), (1, 2), (2, -1), (2, 1), (2, -1), \
                                (-1, 2), (-1, -2), (-2, 1), (-2, -1)):
                    nr, nc = r + dr, c + dc
                    if 0 <= nr < rows and 0 <= nc < cols and (nr, nc) not in seen:
                        seen.add((nr, nc))
                        q.append((nr, nc))

        return -1
