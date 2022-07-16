# https://helloacm.com/teaching-kids-programming-recursive-depth-first-search-algorithm-to-evaluate-the-boolean-binary-tree/
# https://leetcode.com/problems/evaluate-boolean-binary-tree/
# EASY, DFS, RECURSION

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        
        def f(root):
            if not root.left and not root.right:
                return root.val == 1
            if root.val == 2:
                return f(root.left) or f(root.right)
            return f(root.left) and f(root.right)
        
        return f(root)
