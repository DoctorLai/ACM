# https://helloacm.com/algorithms-to-compute-the-length-of-a-linked-list/
# https://binarysearch.com/problems/Length-of-a-Linked-List
# EASY, RECURSION

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, node):
        return 1 + self.solve(node.next) if node is not None else 0
