# https://helloacm.com/teaching-kids-programming-recursive-algorithm-to-determine-if-a-binary-tree-is-symmetric/
# https://binarysearch.com/problems/Symmetric-Binary-Tree
# MEDIUM, RECURSION

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        if root is None:
            return True
        def symmetric(a, b):
            if a is None and b is None:
                return True
            if a is None or b is None:
                return False
            return a.val == b.val and symmetric(a.left, b.right) and symmetric(a.right, b.left)
        return symmetric(root.left, root.right)
