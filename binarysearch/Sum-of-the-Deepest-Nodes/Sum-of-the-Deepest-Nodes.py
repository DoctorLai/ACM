# https://helloacm.com/breadth-first-search-algorithm-to-compute-the-sum-of-the-deepest-nodes/
# https://binarysearch.com/problems/Sum-of-the-Deepest-Nodes
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
        q = deque([root])
        lastSum = 0
        while len(q) > 0:
            sz = len(q)
            lastSum = 0
            for _ in range(sz):
                x = q.popleft()
                lastSum += x.val
                if x.left:
                    q.append(x.left)
                if x.right:
                    q.append(x.right)
        return lastSum
