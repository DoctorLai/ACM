# https://helloacm.com/teaching-kids-programming-number-of-common-factors-bruteforce-algorithm-greatest-common-divisor/
# https://leetcode.com/problems/number-of-common-factors/
# EASY, MATH, GCD

class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        x = gcd(a, b)
        return sum(1 for i in range(1, x + 1) if x % i == 0)
