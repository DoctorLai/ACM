# https://helloacm.com/teaching-kids-programming-reconstruct-the-flight-itinerary-using-topological-sorting-graph-algorithm-dag/
# https://binarysearch.com/problems/Flight-Itinerary
# MEDIUM, GRAPH

class Solution:
    def solve(self, flights):
        G = dict(flights)
        st = set(G) - set(G.values())
        st = next(iter(st))
        ans = [st]
        while st in G:
            st = G[st]
            ans.append(st)
        return ans
