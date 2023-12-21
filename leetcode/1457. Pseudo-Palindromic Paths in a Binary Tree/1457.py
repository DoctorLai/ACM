# https://helloacm.com/teaching-kids-programming-pseudo-palindromic-paths-in-a-binary-tree-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/pseudo-palindromic-paths-in-a-binary-tree/
# MEDIUM, DFS

class Solution:
    def pseudoPalindromicPaths (self, root: TreeNode) -> int:
 
        def dfs(root, arr):
            if not root:
                return 0
            arr[root.val - 1] ^= 1
            ans = dfs(root.left, arr[:])
            ans += dfs(root.right, arr[:])
            ## if this is a leaf node
            if root.left == root.right == None:
                ## at most one element appears odd number of time
                if sum(arr) <= 1:
                    ans += 1
            return ans
 
        return dfs(root, [0] * 9)
