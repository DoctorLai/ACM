# https://helloacm.com/teaching-kids-programming-33310-derangement-algorithms-via-dynamic-programming-algorithm/
# https://leetcode.com/problems/find-the-derangement-of-an-array/
# MEDIUM, MATH, DP

class Solution:
    def findDerangement(self, n: int) -> int:
        def f(n):
            if n == 1:
                return 0
            if n == 2:
                return 1
            a, b = 0, 1
            for i in range(3, n + 1):
                a, b = b, (i - 1) * (a + b) % (10**9+7)
            return b        
        return f(n)
