# https://helloacm.com/teaching-kids-programming-count-nodes-equal-to-average-of-subtree-via-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/
# MEDIUM, DFS

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def averageOfSubtree(self, root: Optional[TreeNode]) -> int:
        ans = 0
        
        def dfs(root):
            if not root:
                return 0, 0
            ls, ln = dfs(root.left)
            rs, rn = dfs(root.right)
            s = ls + rs + root.val
            n = ln + rn + 1
            if root.val == s // n:
                nonlocal ans
                ans += 1
            return s, n
        
        dfs(root)
        return ans
