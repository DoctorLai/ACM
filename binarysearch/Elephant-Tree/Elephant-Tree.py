# https://helloacm.com/teaching-kids-programming-depth-first-search-algorithm-to-convert-to-elephant-binary-tree/
# https://binarysearch.com/problems/Elephant-Tree
# MEDIUM, DFS

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        def dfs(node):
            if not node:
                return 0
            val = node.val
            val += dfs(node.left)
            val += dfs(node.right)
            node.val = val
            return val
        dfs(root)
        return root
