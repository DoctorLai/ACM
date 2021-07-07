# https://helloacm.com/teaching-kisd-programming-multiples-of-3-and-7/
# https://binarysearch.com/problems/3-and-7
# EASY, MATH, RECURSION

class Solution:
    @cache
    def solve(self, n):
        if n < 0:
            return False
        if n % 3 == 0 or n % 7 == 0:
            return True
        return self.solve(n - 3) or self.solve(n - 7)
