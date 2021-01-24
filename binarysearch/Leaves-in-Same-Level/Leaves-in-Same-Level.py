# https://helloacm.com/binary-tree-algorithm-checking-leaves-in-the-same-level/
# https://binarysearch.com/problems/Leaves-in-Same-Level
# MEDIUM, BFS

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        if root is None:
            return True
        Q = deque([(root, 0)])
        depths = set()
        while len(Q) > 0:
            cur, d = Q.popleft()
            if cur.left:
                Q.append((cur.left, d + 1))
            if cur.right:
                Q.append((cur.right, d + 1))
            if cur.left is None and cur.right is None:
                depths.add(d)
        return len(depths) == 1
