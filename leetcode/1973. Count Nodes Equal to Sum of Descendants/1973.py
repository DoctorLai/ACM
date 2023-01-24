# https://helloacm.com/teaching-kids-programming-count-nodes-equal-to-sum-of-descendants-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/count-nodes-equal-to-sum-of-descendants/
# MEDIUM, DFS, RECURSION

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def equalToDescendants(self, root: Optional[TreeNode]) -> int:
        self.ans = 0
        
        def dfs(root):
            if not root:
                return 0
            
            lsum = dfs(root.left)
            rsum = dfs(root.right)
            
            if lsum + rsum == root.val:
                self.ans += 1
            return lsum + rsum + root.val
        
        dfs(root)
        return self.ans
