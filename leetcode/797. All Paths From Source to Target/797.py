# https://helloacm.com/teaching-kids-programming-finding-all-paths-from-source-to-target-in-a-directed-acyclic-graph-dag-using-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/all-paths-from-source-to-target/
# MEDIUM, DFS, GRAPH

class Solution:
    def allPathsSourceTarget(self, graph: List[List[int]]) -> List[List[int]]:
        ans = []
        def dfs(curPath, n):
            if n == len(graph) - 1:
                ans.append(curPath[:])
                return            
            for nextNode in graph[n]:
                curPath.append(nextNode)
                dfs(curPath, nextNode)
                curPath.pop()        
        dfs([0], 0)
        return ans
