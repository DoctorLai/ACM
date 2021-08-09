# https://helloacm.com/teaching-kids-programming-linked-list-jumps-via-recursion/
# https://binarysearch.com/problems/Linked-List-Jumps
# EASY, RECURSION

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, node):
        if not node:
            return node
        
        head = node
        for _ in range(head.val):
            head = head.next
            if not head:
                break
        
        node.next = self.solve(head)
        return node
