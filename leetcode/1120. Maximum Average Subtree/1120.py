# https://helloacm.com/teaching-kids-programming-recursive-depth-first-search-algorithm-to-compute-the-max-average-of-a-binary-subtree/
# https://leetcode.com/problems/maximum-average-subtree/
# MEDIUM, DFS

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maximumAverageSubtree(self, root: Optional[TreeNode]) -> float:
        ans = 0        
        def dfs(root):
            if not root:
                return (0, 0)
            nonlocal ans
            left, cnt1 = dfs(root.left)
            right, cnt2 = dfs(root.right)
            c = cnt1 + cnt2 + 1
            s = left + right + root.val
            ans = max(ans, s / c)
            return (s, c)
        dfs(root)
        return ans
