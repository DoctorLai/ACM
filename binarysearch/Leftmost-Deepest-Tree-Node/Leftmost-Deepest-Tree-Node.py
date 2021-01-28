# https://helloacm.com/breadth-first-search-algorithm-to-compute-the-leftmost-deepest-tree-node-in-a-binary-tree/
# https://binarysearch.com/problems/Leftmost-Deepest-Tree-Node
# MEDIUM, BFS

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        if root is None:
            return None
        q = deque([root])
        while len(q) > 0:
            last = []
            sz = len(q)
            for i in range(sz):
                last.append(q.popleft())
                if last[-1].left:
                    q.append(last[-1].left)
                if last[-1].right:
                    q.append(last[-1].right)
        return last[0].val
