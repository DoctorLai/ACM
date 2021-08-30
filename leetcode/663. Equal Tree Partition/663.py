# https://helloacm.com/teaching-kids-programming-equal-tree-partition-via-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/equal-tree-partition/
# MEDIUM, DFS

class Solution(object):
    def checkEqualTree(self, root):
        seen = []

        def dfs(node):
            if not node: 
                return 0
            s = dfs(node.left) + dfs(node.right) + node.val
            seen.append(s)
            return s

        total = dfs(root)
        seen.pop()
        return total / 2.0 in seen 
