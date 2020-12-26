# https://helloacm.com/recursive-algorithm-to-convert-a-list-to-binary-search-tree/
# https://binarysearch.com/problems/List-to-Binary-Search-Tree
# MEDIUM, RECURSION

# class Tree:
#     def __init__(self, val, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def solve(self, nums):
        if not nums:
            return None
        k = len(nums) // 2
        root = Tree(nums[k])
        root.left = self.solve(nums[:k])
        root.right = self.solve(nums[k+1:])
        return root
