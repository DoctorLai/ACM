# https://helloacm.com/linked-list-delete-last-occurrence-of-value/
# Linked-List-Delete-Last-Occurrence-of-Value
# MEDIUM, SEARCH

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, node, target):
        dummy = LLNode(-1)
        dummy.next = node
        last, lastPrev = None, None
        prev = dummy
        while node:
            if node.val == target:
                lastPrev = prev
                last = node
            prev = node
            node = node.next
        if lastPrev:
            lastPrev.next = last.next
        return dummy.next
