# https://helloacm.com/teaching-kids-programming-split-tree-to-maximize-product-recursive-depth-first-search-algorithm/
# https://binarysearch.com/problems/Split-Tree-to-Maximize-Product
# MEDIUM, DFS

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        s = set()
        ans = -math.inf

        def dfs(root):
            if not root:
                return 0
            left = dfs(root.left)
            s.add(left)
            right = dfs(root.right)            
            s.add(right)
            total = left + right + root.val
            s.add(total)            
            return total

        total = dfs(root)
        print(total, s)
        for i in s:
            ans = max(ans, (total - i) * i)
        return ans
