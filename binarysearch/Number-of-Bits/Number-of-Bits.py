# https://helloacm.com/teaching-kids-programming-compute-the-number-of-set-bits-in-an-integer/
# https://binarysearch.com/problems/Number-of-Bits
# EASY, MATH

class Solution:
    def solve(self, n):
        ans = 0
        while n > 0:
            ans += 1
            n &= (n - 1)
        return ans
