# https://helloacm.com/teaching-kids-programming-sum-the-multiples-in-a-range-using-venn-diagram-math-and-bruteforce-algorithm/
# https://leetcode.com/problems/sum-multiples/
# EASY, MATH

class Solution:
    def sumOfMultiples(self, n: int) -> int:
        def f(x):
            L = x
            H = n // x * x
            C = (H - L) // x + 1
            return (L + H) * C // 2
        return f(3) + f(5) + f(7) - f(15) - f(35) - f(21) + f(105)
