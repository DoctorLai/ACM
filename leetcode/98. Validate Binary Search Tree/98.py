# https://helloacm.com/teaching-kids-programming-four-algorithms-to-validate-a-binary-search-tree/
# https://leetcode.com/problems/validate-binary-search-tree/
# MEDIUM, RECURSION

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:   
        prev = -inf
        
        def dfs(root):
            nonlocal prev
            if not root:
                return True
            if not dfs(root.left):
                return False
            if root.val <= prev:
                return False
            prev = root.val
            return dfs(root.right)
        
        return dfs(root)
