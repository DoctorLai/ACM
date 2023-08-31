# https://helloacm.com/how-to-balance-a-binary-search-tree-using-recursive-inorder-traversal-algorithm/
# https://leetcode.com/problems/balance-a-binary-search-tree/
# MEDIUM, RECURSION, BINARY TREE

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def balanceBST(self, root: TreeNode) -> TreeNode:

        def dfs(root):
            if not root:
                return
            yield from dfs(root.left)
            yield root.val
            yield from dfs(root.right)

        arr = list(dfs(root))

        def f(L, R):
            if L > R:
                return
            if L == R:
                return TreeNode(arr[L])
            M = L + R >> 1
            root = TreeNode(arr[M])
            root.left = f(L, M - 1)
            root.right = f(M + 1, R)
            return root

        return f(0, len(arr) - 1)
