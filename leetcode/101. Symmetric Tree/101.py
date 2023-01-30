# https://helloacm.com/teaching-kids-programming-iterative-algorithm-to-check-if-a-binary-tree-is-symmetric/
# https://leetcode.com/problems/symmetric-tree/
# EASY, DFS, RECURSION

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSymmetric(self, root: Optional[TreeNode]) -> bool:
        if not root:
            return True
        
        def f(a, b):
            if a is None and b is None:
                return True
            if a is None or b is None:
                return False
            return a.val == b.val and f(a.left, b.right) and f(a.right, b.left)
        
        return f(root, root)
