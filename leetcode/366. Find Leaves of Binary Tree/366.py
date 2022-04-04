# https://helloacm.com/teaching-kids-programming-find-leaves-of-binary-tree-via-recursive-depth-first-search-algorithm/
# https://leetcode.com/problems/find-leaves-of-binary-tree/
# MEDIUM, DFS


class Solution:
    def findLeaves(self, root: Optional[TreeNode]) -> List[List[int]]:
        data = defaultdict(list)
        
        def dfs(root):
            if not root:
                return 0
            left = dfs(root.left)
            right = dfs(root.right)
            d = max(left, right) + 1
            data[d].append(root.val)
            return d
        
        dfs(root)
        return data.values()
