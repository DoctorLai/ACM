# https://helloacm.com/teaching-kids-programming-find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree-via-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/
# EASY, DFS

class Solution:
    def getTargetCopy(self, a: TreeNode, b: TreeNode, target: TreeNode) -> TreeNode:
        self.ans = None
        def dfs(a, b, t):
            if not a:
                return
            if a is t:
                self.ans = b
                return
            dfs(a.left, b.left, t)
            if self.ans:
                return
            dfs(a.right, b.right, t)
        dfs(a, b, target)
        return self.ans
           
