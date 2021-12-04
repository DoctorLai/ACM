# https://helloacm.com/teaching-kids-programming-algorithms-to-check-if-linked-list-strictly-increasing/
# https://binarysearch.com/problems/A-Strictly-Increasing-Linked-List
# EASY, LINKED LIST

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, head):
        while head.next:
            if head.val >= head.next.val:
                return False
            head = head.next
        return True
