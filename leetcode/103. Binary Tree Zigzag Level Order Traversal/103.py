# https://helloacm.com/teaching-kids-programming-binary-tree-zigzag-level-order-traversal-via-breadth-first-search-algorithm/
# https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/
# MEDIUM, BFS

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def zigzagLevelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        ans = []
        if not root:
            return ans
        q = deque([root])
        while q:
            n = len(q)
            cur = []
            for _ in range(n):
                x = q.popleft()
                cur.append(x.val)
                for kid in (x.left, x.right):
                    if kid:
                        q.append(kid)
            if len(ans) & 1:
                ans.append(cur[::-1])
            else:
                ans.append(cur)
        return ans
