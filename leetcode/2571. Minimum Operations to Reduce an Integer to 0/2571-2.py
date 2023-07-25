# https://helloacm.com/teaching-kids-programming-minimum-operations-to-reduce-an-integer-to-0-math-analysis-another-recursion/
# https://leetcode.com/problems/minimum-operations-to-reduce-an-integer-to-0/
# MEDIUM, RECURSION, MATH

class Solution:
    def minOperations(self, n: int) -> int:
        @cache
        def f(x):
            if x == 0:
                return 0
            if x == 1:
                return 1            
            y = x // 2
            if x & 1:                
                return min(f(y), f(y + 1)) + 1
            return f(y)

        return f(n)
