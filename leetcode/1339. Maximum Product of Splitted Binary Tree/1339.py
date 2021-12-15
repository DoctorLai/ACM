# https://helloacm.com/teaching-kids-programming-split-tree-to-maximize-product-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/maximum-product-of-splitted-binary-tree/
# MEDIUM, DFS

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxProduct(self, root: Optional[TreeNode]) -> int:
        def dfs(root):
            if not root:
                return 0
            return root.val + dfs(root.left) + dfs(root.right)
        
        ans = 0
        def dfs2(root):
            if not root:
                return 0
            nonlocal ans
            cur = root.val + dfs2(root.left) + dfs2(root.right)
            ans = max(ans, (total - cur) * cur)
            return cur

        total = dfs(root)
        dfs2(root)
        return ans % (10**9+7)    
