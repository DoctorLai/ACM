# https://helloacm.com/teaching-kids-programming-longest-path-in-binary-tree-via-recursive-depth-first-search-algorithm/
# https://binarysearch.com/problems/Longest-Tree-Path
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
            L, R = dfs(root.left), dfs(root.right)
            ans = max(ans, L + R + 1)
            return 1 + max(L, R)

        dfs(root)
        return ans
