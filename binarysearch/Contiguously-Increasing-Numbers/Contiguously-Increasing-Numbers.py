# https://helloacm.com/teaching-kids-programming-contiguously-increasing-numbers-depth-first-search-breadth-first-search-and-math/
# https://binarysearch.com/problems/Contiguously-Increasing-Numbers
# EASY, MATH

class Solution:
    def solve(self, start, end):
        s = "123456789"
        a = []
        for i in range(9):
            for j in range(i + 1, 10):
                x = int(s[i:j])
                if start <= x <= end:
                    a += (x,)
        return sorted(a)
