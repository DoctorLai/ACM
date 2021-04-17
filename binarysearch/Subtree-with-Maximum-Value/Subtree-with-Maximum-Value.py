# https://helloacm.com/teaching-kids-programming-subtree-with-maximum-value-via-recursive-depth-first-search-algorithm/
# https://binarysearch.com/problems/Subtree-with-Maximum-Value
# MEDIUM, DFS, RECURSION

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):        
        ans = -math.inf
        def dfs(root):
            nonlocal ans
            if not root:                
                return 0
            x = dfs(root.left) + dfs(root.right) + root.val
            ans = max(ans, x)
            return x
        dfs(root)
        return max(0, ans)
                
