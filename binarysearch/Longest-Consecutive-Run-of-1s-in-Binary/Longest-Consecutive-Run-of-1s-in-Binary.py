# https://helloacm.com/teaching-kids-programming-longest-consecutive-run-of-1s-in-binary/
# https://binarysearch.com/problems/Longest-Consecutive-Run-of-1s-in-Binary
# MEDIUM, BIT

class Solution:
    def solve(self, n):
        return max(map(len, bin(n)[2:].split('0')))
