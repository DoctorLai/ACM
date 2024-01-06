# https://helloacm.com/teaching-kids-programming-pseudo-palindromic-paths-in-a-binary-tree-breadth-first-search-algorithm-iterative-preorder-reversed-preorder/
# https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/
# MEDIUM, BFS

class Solution:
    def pseudoPalindromicPaths (self, root: TreeNode) -> int:
        ans = 0
        q = deque([(root, 0)])
        while q:
            cur, mask = q.popleft()
            mask ^= (1 << cur.val)
            if cur.left == cur.right == None:
                if mask & (mask - 1) == 0:
                    ans += 1
            else:                
                if cur.left:
                    q.append((cur.left, mask))
                if cur.right:
                    q.append((cur.right, mask))
        return ans
