# https://helloacm.com/teaching-kids-programming-finding-the-network-delay-time-via-floyd-warshall-shortest-path-algorithm/
# https://leetcode.com/problems/network-delay-time/
# MEDIUM, GRAPH

class Solution:
    def networkDelayTime(self, times: List[List[int]], N: int, K: int) -> int:
        dist = [[math.inf for _ in range(N)] for _ in range(N)]
        for u, v, w in times:
            dist[u-1][v-1] = w
        for i in range(N):
            dist[i][i] = 0
        for k in range(N):
            for i in range(N):
                for j in range(N):
                    dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j])
        return max(dist[K-1]) if max(dist[K-1]) < math.inf else -1         
