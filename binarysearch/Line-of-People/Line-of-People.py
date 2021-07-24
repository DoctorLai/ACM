# https://binarysearch.com/problems/Line-of-People
# https://helloacm.com/teaching-kids-programming-line-of-people/
# EASY, MATH

class Solution:
    def solve(self, n, a, b):
        return min(n - a, b + 1)
