# https://helloacm.com/breadth-first-search-algorithm-to-compute-the-sum-of-a-binary-tree/
# https://binarysearch.com/problems/Tree-Sum
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
        q = deque()
        q.append(root)
        ans = 0
        while len(q) > 0:
            p = q.popleft()
            ans += p.val
            if p.left:
                q.append(p.left)
            if p.right:
                q.append(p.right)
        return ans
