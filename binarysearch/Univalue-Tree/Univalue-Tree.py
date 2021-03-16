# https://helloacm.com/teaching-kids-programming-breadth-first-search-algorithm-to-determine-a-univalue-binary-tree/
# https://binarysearch.com/problems/Univalue-Tree
# MEDIUM, BFS

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        if not root:
            return True
        q = deque([root])
        data = set()
        while len(q) > 0:
            p = q.popleft()
            data.add(p.val)
            if p.left:
                q.append(p.left)
            if p.right:
                q.append(p.right)
        return len(data) == 1
