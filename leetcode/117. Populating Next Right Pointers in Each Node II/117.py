# https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/
# https://helloacm.com/teaching-kids-programming-populating-next-right-pointers-in-each-node-breadth-first-search-algorithm/
# MEDIUM, BFS

"""
# Definition for a Node.
class Node:
    def __init__(self, val: int = 0, left: 'Node' = None, right: 'Node' = None, next: 'Node' = None):
        self.val = val
        self.left = left
        self.right = right
        self.next = next
"""

class Solution:
    def connect(self, root: Optional['Node']) -> Optional['Node']:
        if not root:
            return root
        q = deque([root])
        while q:
            n = len(q)
            for i in range(n):
                cur = q.popleft()
                if cur.left:
                    q.append(cur.left)
                if cur.right:
                    q.append(cur.right)
                if i != n - 1:
                    cur.next = q[0]
        return root
