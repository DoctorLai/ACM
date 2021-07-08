# https://helloacm.com/teaching-kids-programming-group-integers/
# https://binarysearch.com/problems/Group-Integers
# EASY, GCD, MATH

class Solution:
    def solve(self, nums):
        return reduce(gcd, Counter(nums).values()) > 1
