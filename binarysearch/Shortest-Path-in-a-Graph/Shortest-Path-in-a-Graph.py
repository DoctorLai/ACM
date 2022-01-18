# https://helloacm.com/teaching-kids-programming-uniform-cost-search-algorithm-to-solve-shortest-path-in-a-graph/
# https://binarysearch.com/problems/Shortest-Path-in-a-Graph
# MEDIUM, UCS, GRAPH

class Solution:
    def solve(self, edges, s, e):
        G = defaultdict(list[int])
        for a, b, c in edges:
            G[a].append((b, c))
        q = [(0, s)]
        seen = set()
        while q:
            d, cur = heappop(q)
            if cur == e:
                return d
            if cur in seen:
                continue
            seen.add(cur)
            for n, c in G[cur]:
                heappush(q, (d + c, n))
        return -1
