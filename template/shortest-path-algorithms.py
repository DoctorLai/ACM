# https://binarysearch.com/problems/Shortest-Path-in-a-Graph

class Solution:
    def solve(self, edges, start, end):
        G = defaultdict(list)
        N = 0
        for x, y, w in edges:
            G[x] += [(y, w)]
            N = max(N, x, y)
        N += 1 # number of vertice

        def UCS(start, end):            
            q = [(0, start)]
            seen = set()
            while q:
                c, v = heappop(q)
                if v == end:
                    return c
                if v in seen:
                    continue
                seen.add(v)
                for x, w in G[v]:
                    heappush(q, (c + w, x))
            return -1

        def Dijkstra(start, end):
            d = { start: 0 }
            q = [(0, start)]
            seen = set()
            while q:
                c, v = heappop(q)
                if v in seen:
                    continue
                seen.add(v)
                for x, w in G[v]:
                    if c + w < d.get(x, inf):                        
                        d[x] = c + w       
                        heappush(q, (c + w, x))                 
            return d.get(end, -1)

        def Floyd(start, end):
            d = [[0 if i == j else inf for i in range(N)] for j in range(N)]
            for a, b, w in edges:
                d[a][b] = w
            for k, i, j in product(range(n), repeat=3):
                d[i][j] = min(d[i][j], d[i][k] + d[k][j])            
            return d[start][end] if d[start][end] != inf else -1

        def SPFA(start, end):
            d = defaultdict(lambda: inf)
            d[start] = 0
            q = deque([start])
            while q:
                v = q.popleft()
                for x, w in G[v]:
                    if d[v] + w < d[x]:
                        d[x] = d[v] + w
                        if x not in q:
                            q.append(x)
            return d[end] if d[end] != inf else -1
