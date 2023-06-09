# https://leetcode.com/problems/detonate-the-maximum-bombs/
# https://helloacm.com/teaching-kids-programming-max-number-of-connected-components-in-a-directed-graph-detonate-the-maximum-bombs/
# MEDIUM, DFS

class Solution:
    def maximumDetonation(self, bombs: List[List[int]]) -> int:
        def f(a, b):
            x1, y1, r1 = a
            x2, y2, _ = b
            return (x1-x2)**2 + (y1-y2) **2 <= r1**2

        G = defaultdict(list)
        n = len(bombs)
        for i in range(n):
            for j in range(n):
                if i != j and f(bombs[i], bombs[j]):
                    G[i].append(j)

        def dfs(x, seen):
            if x in seen:
                return 0
            seen.add(x)
            ans = 1
            for y in G[x]:
                ans += dfs(y, seen)
            return ans

        return max((dfs(i, set()) for i in range(n)), default=0)
