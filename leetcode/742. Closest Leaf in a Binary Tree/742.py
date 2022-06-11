# https://helloacm.com/teaching-kids-programming-closest-leaf-in-a-binary-tree-breadth-depth-first-search-in-graph/
# https://leetcode.com/problems/closest-leaf-in-a-binary-tree/
# MEDIUM, BFS, DFS, GRAPH

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findClosestLeaf(self, root: Optional[TreeNode], k: int) -> int:
        
        G = defaultdict(list)
        leafs = set()
        
        def dfs(root, par):
            if not root:
                return
            dfs(root.left, root)
            dfs(root.right, root)
            if par:
                G[root.val].append(par.val)                
                G[par.val].append(root.val)
            if not root.left and not root.right:
                leafs.add(root.val)
            
        dfs(root, None)
        
        seen = set()
        q = deque([k])
        while q:
            cur = q.popleft()
            if cur in leafs:
                return cur
            for n in G[cur]:
                if n not in seen:
                    q.append(n)
                    seen.add(n)
