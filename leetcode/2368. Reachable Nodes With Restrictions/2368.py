# https://helloacm.com/teaching-kids-programming-reachable-nodes-with-restrictions-graph-theory-depth-first-search-algorithm/
# https://leetcode.com/problems/reachable-nodes-with-restrictions/
# MEDIUM, DFS, GRAPH

class Solution:
    def reachableNodes(self, n: int, edges: List[List[int]], restricted: List[int]) -> int:        
        B = set(restricted)
        G = defaultdict(list)
        for a, b in edges:
            G[a].append(b)
            G[b].append(a)
        seen = set()

        def dfs(i):
            if i in seen or i in B:
                return 0
            seen.add(i)
            ans = 1
            for x in G[i]:
                ans += dfs(x)
            return ans

        return dfs(0)
