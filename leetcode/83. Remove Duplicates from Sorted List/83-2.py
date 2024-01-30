# https://helloacm.com/teaching-kids-programming-remove-duplicates-from-sorted-linked-list-using-hash-set/
# https://leetcode.com/problems/remove-duplicates-from-sorted-list/
# EASY, HASH MAP

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return None
        prev = None
        cur = head
        seen = set()
        while cur:
            if cur.val in seen:
                node = cur
                prev.next = cur.next
                del node
            else:
                seen.add(cur.val)
                prev = cur
            cur = cur.next
        return head
