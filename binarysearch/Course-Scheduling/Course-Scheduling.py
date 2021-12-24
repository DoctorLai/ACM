# https://binarysearch.com/problems/Course-Scheduling
# https://helloacm.com/teaching-kids-programming-topological-sort-algorithm-on-directed-graphs-course-schedule-bfs/
# MEDIUM, TOPOLOGICAL SORT, GRAPH

class Node(object):
    def __init__(self):
        self.inDegrees = 0
        self.outNodes = []

class Solution:
    def solve(self, courses):
        graph = defaultdict(Node)
        totalDeps = 0
        for i, v in enumerate(courses):
            for j in v:
                graph[i].outNodes.append(j)
                graph[j].inDegrees += 1
                totalDeps += 1
        q = deque()
        for a, node in graph.items():
            if node.inDegrees == 0:
                q.append(a)
        r = 0
        while q:
            v = q.popleft()
            for a in graph[v].outNodes:
                graph[a].inDegrees -= 1                
                r += 1
                if graph[a].inDegrees == 0:
                    q.append(a)
        return r == totalDeps
