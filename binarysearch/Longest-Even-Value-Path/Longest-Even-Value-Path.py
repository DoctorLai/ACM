# https://helloacm.com/teaching-kids-programming-longest-even-value-path-in-binary-tree-using-recursive-depth-first-search-algorithm/
# https://binarysearch.com/problems/Longest-Even-Value-Path
# MEDIUM, DFS, RECURSION

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        ans = 0
        def dfs(root):
            if not root:
                return 0
            nonlocal ans
            left = dfs(root.left)
            right = dfs(root.right)
            if root.val & 1 == 0:
                ans = max(ans, left + right + 1)
                return 1 + max(left, right)
            return 0
        dfs(root)
        return ans
