# https://helloacm.com/teaching-kids-programming-beer-bottle-exchange-algorithm-via-simulation/
# https://binarysearch.com/problems/Beer-Bottles
# EASY, MATH

class Solution:
    def solve(self, n):
        ans = n
        while n >= 3:
            exchange = n // 3
            ans += exchange
            n = (n % 3) + exchange
        return ans
