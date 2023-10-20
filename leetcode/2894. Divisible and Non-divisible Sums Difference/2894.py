# https://helloacm.com/teaching-kids-programming-divisible-and-non-divisible-sums-difference-brute-force-algorithm-and-math/
# https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/
# EASY, MATH

class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        k = n // m
        return n * (n + 1) // 2 - k * (k + 1) * m

