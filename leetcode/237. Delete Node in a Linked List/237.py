# https://helloacm.com/teaching-kids-programming-delete-node-in-a-linked-list/
# https://leetcode.com/problems/delete-node-in-a-linked-list/
# EASY, LINKED LIST

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def deleteNode(self, node):
        """
        :type node: ListNode
        :rtype: void Do not return anything, modify node in-place instead.
        """
        nxt = node.next
        node.val = nxt.val
        node.next = nxt.next
        del nxt
