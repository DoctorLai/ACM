# https://helloacm.com/teaching-kids-programming-count-unreachable-pairs-of-nodes-in-an-undirected-graph-breadth-first-search-algorithm/
# https://leetcode.com/problems/count-unreachable-pairs-of-nodes-in-an-undirected-graph/
# MEDIUM, GRAPH, BFS

class Solution:
    def countPairs(self, n: int, edges: List[List[int]]) -> int:
        G = defaultdict(list)
        seen = set()
        for a, b in edges:
            G[a].append(b)
            G[b].append(a)
        ans = 0
        
        def bfs(i):
            if i in seen:
                return 0
            seen.add(i)
            q = deque([i])
            ans = 0
            while q:
                c = q.popleft()
                ans += 1
                for x in G[c]:
                    if x not in seen:
                        q.append(x)
                        seen.add(x)
            return ans
                            
        for i in range(n):
            c = bfs(i)
            ans += (n - c) * c
        return ans >> 1
