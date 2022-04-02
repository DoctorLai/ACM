# https://helloacm.com/teaching-kids-programming-permutation-of-k-out-of-n-visible-blocks-via-top-down-dynamic-programming-algorithm/
# https://binarysearch.com/problems/Visible-Blocks
# HARD, DP, MATH, RECURSION

class Solution:
    def solve(self, n, k):
        
        def f(n, k):
            if n < k:
                return 0
            if k == 1:
                return factorial(n - 1)
            if n == k:
                return 1
            return f(n - 1, k - 1) + (n - 1) * f(n - 1, k)

        return f(n, k)
