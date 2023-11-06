# https://helloacm.com/teaching-kids-programming-count-the-digits-that-divide-a-number-three-algorithms/
# https://leetcode.com/problems/count-the-digits-that-divide-a-number/
# EASY, MATH

class Solution:
    def countDigits(self, num: int) -> int:
        ans = 0
        n = num
        while n:
            if num % (n % 10) == 0:
                ans += 1
            n //= 10
        return ans
