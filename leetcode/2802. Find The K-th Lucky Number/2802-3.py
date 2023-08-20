# https://helloacm.com/teaching-kids-programming-find-the-k-th-lucky-number-complete-binary-tree-algorithm/
# https://leetcode.com/problems/find-the-k-th-lucky-number/
# MEDIUM, BINARY TREE

class Solution:
    def kthLuckyNumber(self, k: int) -> str:
        ans = []
        while k:
            if k & 1:
                ans.append("4")
                k = (k - 1) // 2
            else:
                ans.append("7")
                k = (k - 2) // 2
        return "".join(ans[::-1])
