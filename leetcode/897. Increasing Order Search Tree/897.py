# https://helloacm.com/teaching-kids-programming-inorder-traversal-algorithm-to-convert-binary-search-tree-to-increasing-order-search-tree/
# https://leetcode.com/problems/increasing-order-search-tree/
# EASY, RECURSION

class Solution:
    def increasingBST(self, root):
        def inorder(node):
            if not node:
                return
            yield from inorder(node.left)
            yield node.val
            yield from inorder(node.right)

        ans = cur = TreeNode(None)
        for v in inorder(root):
            cur.right = TreeNode(v)
            cur = cur.right
        return ans.right
