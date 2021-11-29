# https://helloacm.com/teaching-kids-programming-algorithms-to-check-odd-number-of-digits/
# https://binarysearch.com/problems/Odd-Number-of-Digits
# EASY, MATH

class Solution:
    def solve(self, nums):
        def odd(i):
            if i == 0:
                return 1
            a = 0
            while i > 0:
                a += 1
                i //= 10
            return a & 1
        return [odd(i) for i in nums].count(True)
