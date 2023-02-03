# https://helloacm.com/teaching-kids-programming-algorithms-to-compute-the-alternating-digit-sum/
# https://leetcode.com/problems/alternating-digit-sum/
# EASY, MATH

class Solution:
    def alternateDigitSum(self, n: int) -> int:
        ans = 0
        sign = 1
        while n > 0:
            sign = - sign
            ans += sign * (n % 10)
            n //= 10
        return sign * ans
