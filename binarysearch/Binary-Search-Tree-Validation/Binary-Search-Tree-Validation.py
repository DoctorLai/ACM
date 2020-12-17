# https://helloacm.com/teaching-kids-programmaing-recursive-algorithm-to-validate-a-binary-search-tree/
# https://binarysearch.com/problems/Binary-Search-Tree-Validation
# MEDIUM, RECURSION

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def checkBST(self, root, minv = -float("inf"), maxv = float("inf")):
        if root is None:
            return True
        if root.val < minv or root.val > maxv:
            return False
        return self.checkBST(root.left, minv, root.val) and self.checkBST(root.right, root.val, maxv)
        
    def solve(self, root):
        return self.checkBST(root)
