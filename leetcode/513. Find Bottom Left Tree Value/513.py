# https://helloacm.com/teaching-kids-programming-breadth-first-search-algorithm-to-find-bottom-left-tree-value/ 
# https://helloacm.com/teaching-kids-programming-breadth-first-search-algorithm-to-find-bottom-left-tree-value/
# MEDIUM, BFS

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findBottomLeftValue(self, root: TreeNode) -> int:
        if not root:
            return None
        q = deque([root])
        ans = None
        while q:
            sz = len(q)            
            ans = q[0].val
            for i in range(sz):
                cur = q.popleft()
                if cur.left:
                    q.append(cur.left)
                if cur.right:
                    q.append(cur.right)
        return ans
