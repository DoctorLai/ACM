# https://helloacm.com/teaching-kids-programming-algorithms-to-check-if-a-linked-list-is-palindrome/
# https://binarysearch.com/problems/Palindrome-Linked-List
# MEDIUM, RECURSION

# class LLNode:
#     def __init__(self, val, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def solve(self, node):
        root = node
        def dfs(node):
            if node is None:
                return True
            nonlocal root
            ans = dfs(node.next)
            if root.val != node.val:
                return False
            root = root.next
            return ans
        return dfs(node)
