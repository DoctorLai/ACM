# https://helloacm.com/teaching-kids-programming-breadth-first-search-algorithm-to-count-the-vertical-lines-in-binary-tree/
# https://binarysearch.com/problems/Vertical-Lines-in-Binary-Tree
# EASY, BFS

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, root):
        if not root:
            return 0
        q = deque([(root, 0)])
        data = set()
        while q:
            cur, x = q.popleft()
            data.add(x)
            if cur.left:
                q.append((cur.left, x - 1))
            if cur.right:
                q.append((cur.right, x + 1))
        return len(data)
