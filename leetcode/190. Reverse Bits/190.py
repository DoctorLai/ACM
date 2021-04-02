# https://helloacm.com/teaching-kids-programming-reverse-bits-of-a-32-bit-integer/
# https://leetcode.com/problems/reverse-bits/
# EASY, MATH

class Solution:
    def reverseBits(self, n: int) -> int:
        ans = 0
        i = 31
        while n:
            ans |= (n & 1) << i
            i -= 1
            n >>= 1
        return ans
