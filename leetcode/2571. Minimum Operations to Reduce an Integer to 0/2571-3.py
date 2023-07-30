# https://helloacm.com/teaching-kids-programming-minimum-operations-to-reduce-an-integer-to-0-greedy-based-on-binary-bits/
# https://leetcode.com/problems/minimum-operations-to-reduce-an-integer-to-0/
# MEDIUM, MATH, BINARY

class Solution:
    def minOperations(self, n: int) -> int:

        def f(n):
            if n == 0:
                return 0
            ans = 0
            while n:
                if n & 3 == 3:
                    ans += 1
                    n += 1
                else:                    
                    ans += n & 1
                    n >>= 1
            return ans

        return f(n)
