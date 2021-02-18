# https://helloacm.com/teaching-kids-programming-recursive-depth-first-search-algorithm-to-compare-leaf-equivalent-trees/
# https://binarysearch.com/problems/Leaf-Equivalent-Trees
# MEDIUM, DFS

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root0, root1):
        def dfs(root):
            if root is None:
                return []
            if root.left is None and root.right is None:
                return [root.val]
            return dfs(root.left) + dfs(root.right)
        return dfs(root0) == dfs(root1)
