# https://helloacm.com/teaching-kids-programming-minimum-bit-flips-to-convert-number-hamming-distance/
# https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
# EASY, MATH

class Solution:
    def minBitFlips(self, start: int, goal: int) -> int:
        x = start ^ goal
        return bin(x).count('1')
