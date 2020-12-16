# https://helloacm.com/teaching-kids-programming-algorithms-to-search-in-binary-search-tree/
# https://binarysearch.com/problems/Search-in-a-Binary-Search-Tree
# MEDIUM, RECURSION

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root, val):
        if root is None:
            return False
        if val == root.val:
            return True
        if val < root.val:
            return self.solve(root.left, val)
        return self.solve(root.right, val)
