# https://helloacm.com/teaching-kids-programming-floyd-warshal-multi-source-all-pairs-shortest-path-algorithm-sum-of-costs-in-a-directed-unweighted-graph/
# https://binarysearch.com/problems/Shipping-and-Receiving
# MEDIUM, GRAPH

class Solution:
    def solve(self, G, paths):
        n = len(G)
        d = [[0 if i == j else inf for i in range(n)] for j in range(n)]
        for i, v in enumerate(G):
            for j in v:
                d[i][j] = 1

        for k in range(n):
            for i in range(n):
                for j in range(n):
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j])

        return sum(d[i][j] if d[i][j] != inf else 0 for i, j in paths)
