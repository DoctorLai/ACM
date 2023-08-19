# https://helloacm.com/teaching-kids-programming-find-the-k-th-lucky-number-recursive-algorithm/
# https://leetcode.com/problems/find-the-k-th-lucky-number/
# MEDIUM, RECURSION, MATH

class Solution:
    def kthLuckyNumber(self, k: int) -> str:
        @cache
        def f(n):
            if n == 1:
                return "4"
            if n == 2:
                return "7"
            x = f((n - 1) // 2)
            if n & 1:
                return x + "4"
            return x + "7"

        return f(k)
