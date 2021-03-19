# https://helloacm.com/teaching-kids-programming-breadth-first-search-algorithm-to-sum-root-to-leaf-numbers-in-binary-tree/
# https://leetcode.com/problems/sum-root-to-leaf-numbers/
# MEDIUM, BFS

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: TreeNode) -> int:
        if root is None:
            return 0
        q = deque([(root, root.val)])
        ans = 0
        while len(q) > 0:
            p, x = q.popleft()
            if p.left is None and p.right is None:
                ans += x
            if p.left:
                q.append((p.left, x * 10 + p.left.val))
            if p.right:
                q.append((p.right, x * 10 + p.right.val))
        return ans
