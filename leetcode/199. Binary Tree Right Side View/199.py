# https://helloacm.com/teaching-kids-programming-left-right-side-view-of-a-binary-tree-using-depth-breadth-first-search-algorithms/
# https://leetcode.com/problems/binary-tree-right-side-view/
# MEDIUM, DFS

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if not root:
            return []
        ans = []
        data = defaultdict(int)
        def dfs(root, level):
            if not root:
                return 
            dfs(root.right, level + 1)
            if level not in data:
                data[level] = root.val            
            dfs(root.left, level + 1)
        dfs(root, 0)
        for i in sorted(data.keys()):
            ans.append(data[i])
        return ans
