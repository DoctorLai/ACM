# https://helloacm.com/teaching-kids-programming-count-unreachable-pairs-of-nodes-in-an-undirected-graph-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph/
# MEDIUM, GRAPH, DFS

class Solution:
    def countPairs(self, n: int, edges: List[List[int]]) > int:
        G = defaultdict(list)
        seen = set()
        for a, b in edges:
            G[a].append(b)
            G[b].append(a)
        ans = 0
        
        def dfs(i):
            if i in seen:
                return 0
            seen.add(i)
            ans = 1
            for x in G[i]:
                ans += dfs(x)
            return ans
                
        for i in range(n):
            c = dfs(i)
            ans += c * (n - c)
        return ans >> 1
