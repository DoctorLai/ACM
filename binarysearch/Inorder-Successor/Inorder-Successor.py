# https://helloacm.com/compute-the-inorder-successor-of-a-binary-tree/
# https://binarysearch.com/problems/Inorder-Successor
# MEDIUM, BST

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root, t):
        ans = None
        while root:
            if t < root.val:
                ans = root.val
                root = root.left                
            else:
                root = root.right
        return ans
