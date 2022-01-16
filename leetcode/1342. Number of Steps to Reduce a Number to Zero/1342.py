# https://helloacm.com/teaching-kids-programming-min-number-of-steps-to-reduce-a-number-to-zero/
# https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
# EASY, MATH

class Solution:
    def numberOfSteps(self, num: int) -> int:
        a = bin(num)[2:]
        ones = a.count('1')
        zeros = len(a) - ones
        return ones * 2 + zeros - 1
