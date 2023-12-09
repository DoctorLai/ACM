# https://helloacm.com/teaching-kids-programming-algorithms-to-find-the-unique-vertex-of-zero-indegree-in-a-directed-acyclic-graph/
# https://leetcode.com/problems/find-champion-ii/
# MEDIUM, GRAPH

class Solution:
    def findChampion(self, n: int, edges: List[List[int]]) -> int:
        weak = {b for a, b in edges}
        if len(weak) < n - 1:
            return -1
        return n * (n - 1) //2 - sum(weak)
