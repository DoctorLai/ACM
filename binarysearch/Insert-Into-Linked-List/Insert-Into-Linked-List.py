# https://helloacm.com/teaching-kids-programming-insert-into-linked-list-node-insertion-algorithm/
# https://binarysearch.com/problems/Insert-Into-Linked-List
# EASY, LINKED LIST

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, head, pos, val):
        if not head:
            return LLNode(val)
        prev = dummy = LLNode(-1, head)
        for _ in range(pos):
            prev = head
            head = head.next
        prev.next = LLNode(val)
        prev.next.next = head
        return dummy.next
