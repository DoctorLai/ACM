# https://helloacm.com/teaching-kids-programming-minimum-operations-to-reduce-an-integer-to-0-greedy-recursion-top-down-dynamic-programming-algorithm/
# https://leetcode.com/problems/minimum-operations-to-reduce-an-integer-to-0/
# MEDIUM, DP, RECURSION, MATH

class Solution:
    def minOperations(self, n: int) -> int:
        @cache
        def f(n):
            if n == 0:
                return 0
            if (n & (n - 1)) == 0:
                return 1
            a = int(log2(n))
            b = a + 1
            return f(min(n - (1 << a), (1 << b) - n)) + 1

        return f(n)
