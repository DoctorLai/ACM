# https://helloacm.com/teaching-kids-programming-minimum-distance-between-bst-nodes-recursive-depth-first-search-in-order-traversal-algorithm/
# https://leetcode.com/problems/minimum-distance-between-bst-nodes/
# EASY, DFS, RECURSION

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def minDiffInBST(self, root: Optional[TreeNode]) -> int:

        self.ans = inf
        self.prev = None
        
        def dfs(root):
            if not root:
                return            
            dfs(root.left)
            if self.prev:
                self.ans = min(self.ans, abs(self.prev.val - root.val))
            self.prev = root
            dfs(root.right)
            
        dfs(root)
        return self.ans
