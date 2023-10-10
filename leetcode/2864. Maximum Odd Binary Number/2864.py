# https://helloacm.com/teaching-kids-programming-maximum-odd-binary-number/
# https://leetcode.com/problems/maximum-odd-binary-number/
# EASY, BINARY, MATH

class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        c = Counter(s)
        n = c['1']
        return (n - 1) * '1' + c['0'] * '0' + '1'

