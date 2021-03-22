# https://helloacm.com/fast-and-slow-pointer-to-get-the-middle-of-the-linked-list/
# https://binarysearch.com/problems/Central-Linked-List
# MEDIUM, TWO POINTER

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, node):
        slow = node
        fast = node
        while fast and fast.next:
            fast = fast.next.next
            slow = slow.next
        return slow.val
