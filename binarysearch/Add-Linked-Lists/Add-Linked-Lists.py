# https://helloacm.com/teaching-kids-programming-adding-two-linked-list/
# https://binarysearch.com/problems/Add-Linked-Lists
# MEDIUM, MATH

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, l0, l1):
        dummy = LLNode(-1)
        p = dummy
        c = 0
        while l0 or l1 or c:
            v = c
            if l0:
                v += l0.val
                l0 = l0.next
            if l1:
                v += l1.val
                l1 = l1.next
            p.next = LLNode(v % 10)
            c = v // 10
            p = p.next
        return dummy.next
