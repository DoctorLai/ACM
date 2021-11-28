# https://helloacm.com/teaching-kids-programming-counting-maximal-value-roots-in-binary-tree-recursive-post-order-traversal-dfs-algorithm/
# https://binarysearch.com/problems/Counting-Maximal-Value-Roots-in-Binary-Tree
# EASY, DFS

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
                return -math.inf
            nonlocal ans
            left = dfs(root.left)
            right = dfs(root.right)
            if root.val >= left and root.val >= right:
                ans += 1
            return max(left, right, root.val)

        dfs(root)
        return ans
 
