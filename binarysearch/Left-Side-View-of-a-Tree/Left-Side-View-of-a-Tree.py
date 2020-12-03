# https://helloacm.com/depth-first-search-and-breadth-first-search-algorithm-to-compute-the-left-side-view-of-a-binary-tree/
# https://binarysearch.com/problems/Left-Side-View-of-a-Tree
# MEDIUM, BFS

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        if root is None:
            return []
        ans = []
        q = [root]
        while len(q) > 0:
            sz = len(q)
            ans.append(q[0].val)
            for i in range(sz):
                p = q.pop(0)
                if p.left:
                    q.append(p.left)
                if p.right:
                    q.append(p.right)
        return ans
