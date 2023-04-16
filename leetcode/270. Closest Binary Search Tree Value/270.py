# https://helloacm.com/teaching-kids-programming-closest-binary-search-tree-value-recursion-inorder-binary-search-algorithm/
# https://leetcode.com/problems/closest-binary-search-tree-value/
# MEDIUM, BINARY SEARCH

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def closestValue(self, root: Optional[TreeNode], target: float) -> int:
        ans = root.val
        while root:
            ans = min(root.val, ans, key = lambda x: abs(target - x))
            if target < root.val:
                root = root.left
            else:
                root = root.right
        return ans
