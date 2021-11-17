# https://helloacm.com/teaching-kids-programming-dfs-and-bfs-algorithm-in-a-graph-unlock-rooms-with-keys/
# https://binarysearch.com/problems/Unlock-Rooms
# MEDIUM, DFS

class Solution:
    def solve(self, rooms):
        n = len(rooms)
        seen = set()
        def dfs(i):
            if i in seen:
                return
            seen.add(i)
            for j in rooms[i]:
                dfs(j)
        dfs(0)
        return len(seen) == n
