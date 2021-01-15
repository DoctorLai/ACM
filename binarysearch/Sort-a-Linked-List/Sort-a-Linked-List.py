# https://helloacm.com/teaching-kids-programming-sorting-a-linked-list-using-merge-sort-divide-and-conquer/
# https://binarysearch.com/problems/Sort-a-Linked-List
# MEDIUM, MERGE SORT, RECURSION

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, node):
        def mid(head):
            if head is None or head.next is None:
                return head
            fast, slow = head, head
            prev = None
            while fast and fast.next:
                fast = fast.next.next
                prev = slow
                slow = slow.next
            prev.next = None            
            return slow
        def merge(a, b):
            dummy = LLNode(-1)
            p = dummy
            while a and b:
                if a.val < b.val:
                    p.next = a
                    a = a.next
                else:
                    p.next = b
                    b = b.next
                p = p.next
            if a:
                p.next = a
            if b:
                p.next = b
            return dummy.next
        if node is None or node.next is None:
            return node
        a = self.solve(mid(node))
        b = self.solve(node)
        return merge(a, b)
