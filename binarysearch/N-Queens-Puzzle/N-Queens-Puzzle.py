# https://helloacm.com/backtracking-algorithm-to-solve-n-queens-puzzle-partially-filled/
# https://binarysearch.com/problems/N-Queens-Puzzle
# HARD, DFS

class Solution:
    def solve(self, matrix):
        if not matrix:
            return True
        n = len(matrix)
        data = []
        for i in range(n):
            x = matrix[i].count(1)
            if x > 1:
                return False
            if x == 1:
                data.append(matrix[i].index(1))
            else:
                data.append(-1)
        def check(cur, i):
            for j in range(len(cur)):
                if abs(i - cur[j]) == len(cur) - j or i == cur[j]:
                    return False
            return True
        def dfs(cur):
            if len(cur) == n:
                return True
            x = data[len(cur)]
            sols = []
            if x == -1:
                sols = list(range(n))
            else:
                sols.append(x)
            for i in sols:
                if check(cur, i) and dfs(cur + [i]):
                    return True                        
            return False
        return dfs([])
