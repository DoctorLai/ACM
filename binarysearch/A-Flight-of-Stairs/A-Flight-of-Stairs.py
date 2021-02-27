# https://helloacm.com/teaching-kids-programming-climbing-the-stairs-using-dynamic-programming-algorithm/
# https://binarysearch.com/problems/A-Flight-of-Stairs
# MEDIUM, DP

class Solution:
    def solve(self, n):
        MOD = 10 ** 9 + 7

        def fib():
            a = b = 1
            yield a
            yield b
            while True:
                yield (a + b) % MOD
                a, b = b, (a + b) % MOD

        f = fib()
        for _ in range(n):
            next(f)
        return next(f)
