# https://helloacm.com/teaching-kids-programming-topological-sort-algorithm-on-directed-graphs-course-schedule-bfs/
# https://leetcode.com/problems/course-schedule/
# MEDIUM, TOPOLOGICAL SORT, GRAPH

class Node(object):
    def __init__(self):
        self.inDegrees = 0
        self.outNodes = []

class Solution(object):
    def canFinish(self, numCourses, prerequisites):
        G = defaultdict(Node)
        
        total = 0
        for a, b in prerequisites:
            G[a].inDegrees += 1
            G[b].outNodes.append(a)
            total += 1
            
        q = deque()
        for a, node in G.items():
            if node.inDegrees == 0:
                q.append(a)
                
        r = 0
        while q:
            v = q.popleft()
            for a in G[v].outNodes:
                G[a].inDegrees -= 1
                r += 1
                if G[a].inDegrees == 0:
                    q.append(a)
                    
        return r == total
