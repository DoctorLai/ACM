# https://helloacm.com/teaching-kids-programming-dynamic-programming-algorithms-to-compute-the-maximum-non-adjacent-tree-sum/
# https://binarysearch.com/problems/Maximum-Non-Adjacent-Tree-Sum
# MEDIUM, DP

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        #@cache
        def dfs(root):
            if not root:
                return 0, 0
            takeLeft, notTakeLeft = dfs(root.left)
            takeRight, notTakeRight = dfs(root.right)
            return root.val + notTakeLeft + notTakeRight, \
                   max(takeLeft, notTakeLeft) + max(takeRight, notTakeRight)
        a = dfs(root)
        return max(a[0], a[1])
