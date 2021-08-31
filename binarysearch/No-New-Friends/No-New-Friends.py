# https://helloacm.com/teaching-kids-programming-three-graph-algorithms-does-every-vertex-have-at-least-one-edge-in-graph/
# https://binarysearch.com/problems/No-New-Friends
# MEDIUM, GRAPH

class Solution:
    def solve(self, n, friends):
        G = defaultdict(list[int])
        for a, b in friends:
            G[a].append(b)
            G[b].append(a)
        return all(len(G[i]) > 0 for i in range(n))
