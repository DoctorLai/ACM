# https://helloacm.com/teaching-kids-programming-minimum-starting-nodes-to-visit-graph-topological-sort-indegree/
# https://binarysearch.com/problems/Minimum-Starting-Nodes-to-Visit-Graph
# MEDIUM, GRAPH

class Solution:
    def solve(self, edges):
        G = defaultdict(int)
        nodes = set()
        for u, v in edges:
            G[v] += 1
            nodes.add(u)
            nodes.add(v)
        ans = []
        for i in nodes:
            if G[i] == 0:
                ans.append(i)
        return ans
