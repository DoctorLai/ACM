# https://helloacm.com/teaching-kids-programming-find-the-vertex-of-zero-indegree-in-a-directed-acyclic-graph/
# https://leetcode.com/problems/find-champion-i/
# EASY, GRAPH

class Solution:
    def findChampion(self, grid: List[List[int]]) -> int: 
        ind = defaultdict(int)
        n = len(grid)
        for i in range(n):
            for j in range(i):
                ind[j] += grid[i][j]
        return next((i for i in range(n) if ind[i] == 0))
