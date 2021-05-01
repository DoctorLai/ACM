# https://helloacm.com/teaching-kids-programming-dynamic-programming-or-greedy-algorithm-to-compute-the-min-change/
# https://binarysearch.com/problems/Making-Change
# MEDIUM, MATH, GREEDY

class Solution:
    def solve(self, n):
        return n // 25 + (n % 25) // 10 + (n % 25 % 10) // 5 + (n % 25 % 10 % 5)
