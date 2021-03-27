# https://helloacm.com/teaching-kids-programming-find-center-of-star-graph/
# https://leetcode.com/problems/find-center-of-star-graph/
# MEDIUM, GRAPH

class Solution:
    def findCenter(self, edges: List[List[int]]) -> int:
        G = defaultdict(int)
        for u, v in edges:
            G[u] += 1
            G[v] += 1
            if G[u] > 1:
                return u
            if G[v] > 1:
                return v
