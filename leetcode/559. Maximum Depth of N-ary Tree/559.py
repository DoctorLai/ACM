# https://leetcode.com/problems/maximum-depth-of-n-ary-tree/
# https://helloacm.com/teaching-kids-programming-maximum-depth-of-n-ary-tree-via-depth-first-search-or-breadth-first-search-algorithms/
# EASY, BFS

"""
# Definition for a Node.
class Node:
    def __init__(self, val=None, children=None):
        self.val = val
        self.children = children
"""

class Solution:
    def maxDepth(self, root: 'Node') -> int:
        if not root:
            return 0
        q = deque([(root, 1)])
        ans = 0
        while q:
            cur, lvl = q.popleft()
            ans = max(ans, lvl)
            for c in cur.children:
                q.append((c, lvl + 1))                
        return ans
