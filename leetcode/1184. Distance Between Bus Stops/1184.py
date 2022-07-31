# https://helloacm.com/teaching-kids-programming-distance-between-bus-stops-shortest-distance-in-simple-undirected-weighted-regular-graph/
# https://leetcode.com/problems/distance-between-bus-stops/
# EASY, GRAPH, MATH

class Solution:
    def distanceBetweenBusStops(self, dist: List[int], start: int, stop: int) -> int:
        if start > stop:
            start, stop = stop, start
        return min(sum(dist[:start]) + sum(dist[stop:]), sum(dist[start: stop]))
