# https://helloacm.com/algorithms-to-union-two-sorted-linked-lists/
# https://binarysearch.com/problems/Linked-List-Union
# MEDIUM, RECURSION

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, ll0, ll1):
        if not ll0:
            return ll1
        if not ll1:
            return ll0
        if ll0.val < ll1.val:
            res = ll0
            res.next = self.solve(ll0.next, ll1)
        elif ll1.val < ll0.val:
            res = ll1
            res.next = self.solve(ll1.next, ll0)
        else:  # ll0.val == ll1.val
            res = ll0
            res.next = self.solve(ll0.next, ll1.next)
        return res
