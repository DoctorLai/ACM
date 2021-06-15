# https://helloacm.com/teaching-kids-programming-binary-tree-inorder-traversal-via-recursion-or-iteration/
# https://leetcode.com/problems/binary-tree-inorder-traversal/
# EASY, DFS, RECURSION

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: TreeNode) -> List[int]:
        ans = []
        def dfs(root):
            if root is None:
                return
            nonlocal ans
            dfs(root.left)
            ans.append(root.val)
            dfs(root.right)
        dfs(root)
        return ans
