# https://helloacm.com/teaching-kids-programming-kth-smallest-element-in-a-bst-via-recursive-inorder-traversal-algorithm/
# https://leetcode.com/problems/kth-smallest-element-in-a-bst/
# MEDIUM, RECURSION

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:        
        def dfs(root):
            if not root:
                return
            yield from dfs(root.left)
            yield root.val
            yield from dfs(root.right)            
        return next(c for i, c in enumerate(dfs(root)) if i == k - 1)
