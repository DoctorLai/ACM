# https://helloacm.com/teaching-kids-programming-construct-binary-tree-from-pre-inorder-traversals/
# https://binarysearch.com/problems/Tree-From-PreInorder-Traversals
# MEDIUM, RECURSION

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, preorder, inorder):
        if inorder:
            i = inorder.index(preorder.pop(0))
            return Tree(
                inorder[i],
                left=self.solve(preorder, inorder[:i]),
                right=self.solve(preorder, inorder[i + 1 :]),
            )
