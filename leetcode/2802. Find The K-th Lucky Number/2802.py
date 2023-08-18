# https://helloacm.com/teaching-kids-programming-find-the-k-th-lucky-number-binary-mapping-pattern/
# https://leetcode.com/problems/find-the-k-th-lucky-number/
# MEDIUM, MATH, BINARY

class Solution:
    def kthLuckyNumber(self, k: int) -> str:
        s = bin(k + 1)[3:]
        return s.replace("0", "4").replace("1", "7")
