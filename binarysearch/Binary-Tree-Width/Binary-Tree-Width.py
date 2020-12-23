# https://helloacm.com/breadth-first-search-algorithm-to-compute-the-max-width-of-a-binary-tree/
# https://binarysearch.com/problems/Binary-Tree-Width
# MEDIUM, BFS

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        if root is None:
            return 0
        q = [(root, 0)]
        ans = 0
        while len(q) > 0:
            sz = len(q)
            left = float("inf")
            right = float("-inf")
            for i in range(sz):
                p = q.pop(0)
                if p[0].left:
                   q.append((p[0].left, p[1] * 2)) 
                if p[0].right:
                   q.append((p[0].right, p[1] * 2 + 1))
                left = min(left, p[1])
                right = max(right, p[1])
            ans = max(ans, right - left + 1)
        return ans
                
