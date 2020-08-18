# https://helloacm.com/dfs-and-bfs-algorithm-to-find-numbers-with-same-consecutive-differences/
# https://leetcode.com/problems/numbers-with-same-consecutive-differences/
# MEDIUM, DFS

class Solution:
    def numsSameConsecDiff(self, N: int, K: int) -> List[int]:
        if N == 1:
            return list(range(10))
        if K == 0:
            return [str(x)*N for x in range(1, 10)]
        res = []
        for i in range(1, 10):
            self.dfs(N, K, i, res)
        return res
    
    def dfs(self, N, K, i: int, res: List[int]) -> List[int]:
        if N == 1:
            res.append(i)
            return
        c = i % 10
        if c + K < 10:
            self.dfs(N - 1, K, i * 10 + (c + K), res)
        if c - K >= 0:
            self.dfs(N - 1, K, i * 10 + (c - K), res)
