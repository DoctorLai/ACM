# https://helloacm.com/recursive-algorithm-to-cut-a-binary-search-tree-remove-nodes-not-in-range/
# https://binarysearch.com/problems/Cutting-Binary-Search-Tree
# MEDIUM, BST, RECURSION

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root, lo, hi):
        if root is None:
            return root
        if root.val < lo:
            return self.solve(root.right, lo, hi)
        if root.val > hi:
            return self.solve(root.left, lo, hi)
        root.left = self.solve(root.left, lo, hi)
        root.right = self.solve(root.right, lo, hi)
        return root
