# https://helloacm.com/teaching-kids-programming-pairwise-linked-list-swap/
# https://binarysearch.com/problems/Pairwise-Linked-List-Swap
# MEDIUM, RECURSION

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, node):
        if not node or not node.next:
            return node

        tail = self.solve(node.next.next)
        head = node.next
        head.next = node
        node.next = tail

        return head
