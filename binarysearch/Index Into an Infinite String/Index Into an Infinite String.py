# https://helloacm.com/teaching-kids-programming-index-into-an-infinite-string-find-substring/
# https://binarysearch.com/problems/Index-Into-an-Infinite-String
# EASY, MATH

class Solution:
    def solve(self, s, i, j):
        return "".join(s[x % len(s)] for x in range(i, j))
